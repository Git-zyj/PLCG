/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213318
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (min((644544954U), (var_4)))))) ? ((~(3650422341U))) : ((((+(var_4))) + (max((((/* implicit */unsigned int) var_7)), (var_5)))))));
    var_11 ^= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [(unsigned short)14] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_0 [i_0])))) >= (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [17U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((_Bool)1), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))), (15765002953834835592ULL)));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_12 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_13 &= ((/* implicit */unsigned char) ((unsigned int) (short)9));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_14 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) == (var_5)))), (var_9))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_15 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) < (((/* implicit */int) arr_0 [i_2])))))) * (min((arr_14 [i_3]), (var_2)))));
            arr_15 [(signed char)9] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_14 [(unsigned short)5])) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) : (var_4))))));
                            var_17 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_20 [i_2] [i_2] [i_2]) != (((/* implicit */long long int) var_2))))), (min((((/* implicit */unsigned int) max((var_6), (var_6)))), (arr_10 [(_Bool)1] [(_Bool)1])))));
                        }
                    } 
                } 
            } 
            var_18 -= max((max((var_8), (arr_11 [i_2]))), (max((arr_11 [i_2]), (((/* implicit */unsigned int) var_3)))));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned int) var_7)) : (var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            var_20 += ((/* implicit */unsigned int) ((3650422355U) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
            var_21 = ((/* implicit */unsigned short) (~((~(arr_14 [i_2])))));
        }
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2])) ? ((+(arr_12 [i_2]))) : (((/* implicit */int) ((_Bool) var_5)))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_17 [i_2])), (arr_16 [i_2] [i_2] [(_Bool)1] [i_2])))), (max((((/* implicit */long long int) arr_17 [i_2])), (var_0)))))));
        var_23 = ((/* implicit */long long int) arr_21 [i_2] [i_2]);
    }
}
