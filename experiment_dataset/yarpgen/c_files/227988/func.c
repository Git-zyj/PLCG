/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227988
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
    var_15 = ((/* implicit */unsigned int) min(((+(((long long int) (unsigned char)255)))), (((/* implicit */long long int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) -628982001);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(9223372036854775807LL))))));
        var_17 = ((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)1)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))));
        var_18 = ((/* implicit */_Bool) (-(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 7; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned short) (signed char)31);
                        arr_13 [i_1] [i_1] [i_2] [i_3] [7] |= ((/* implicit */signed char) var_3);
                        arr_14 [i_1] [i_2] [i_3] [(signed char)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((_Bool) 2739682875U)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned short)54539))));
            var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 2] [i_2 + 3] [i_2 - 1]))));
            var_22 = ((/* implicit */_Bool) var_14);
        }
        for (unsigned char i_5 = 4; i_5 < 9; i_5 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_9 [i_1] [i_5] [i_5]))));
            arr_17 [i_5] [i_5] [i_1] &= ((/* implicit */long long int) arr_3 [i_1] [i_5]);
        }
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 3; i_7 < 8; i_7 += 3) 
            {
                {
                    arr_23 [i_1] [i_6] [2U] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (3932915635861246596ULL)))) ? ((-(((arr_7 [i_7] [i_1]) ? (3161296403022118570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [1LL] [i_7 - 1] [6LL] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                    var_25 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) % (((/* implicit */int) (unsigned short)65535))))), (min((((/* implicit */unsigned long long int) arr_15 [i_1] [i_7])), (arr_19 [i_1] [i_6] [i_7 + 1])))));
                }
            } 
        } 
        var_26 = ((/* implicit */short) ((unsigned char) arr_20 [i_1]));
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) || (((/* implicit */_Bool) (signed char)-100))));
}
