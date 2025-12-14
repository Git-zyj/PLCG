/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38507
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) -2817281209876515577LL))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2817281209876515577LL)))))) != (((((((/* implicit */_Bool) arr_4 [(unsigned char)16])) ? (-2817281209876515596LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1 + 1])))))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_2 [(unsigned char)9] [i_1 - 1]))));
    }
    var_13 = ((/* implicit */unsigned char) (unsigned short)4824);
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = arr_8 [i_2];
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_14 -= ((/* implicit */int) min((min((2817281209876515576LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2817281209876515576LL))))))), (((((/* implicit */_Bool) 13836514290984710198ULL)) ? ((-(-2817281209876515576LL))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_8 [i_2]))))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((min((((/* implicit */int) arr_21 [i_3 - 3] [i_3] [i_4] [i_6])), (arr_4 [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) 2817281209876515562LL))))))))));
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_2])) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_5] [i_5]))))) ? (((/* implicit */long long int) arr_11 [i_2] [i_4])) : (2817281209876515573LL)));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) (_Bool)0);
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (((+(min((((/* implicit */long long int) var_7)), (-2817281209876515574LL))))) + ((-((+(-2817281209876515574LL))))))))));
            var_19 = ((/* implicit */short) var_1);
        }
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((-(10771569579385868564ULL))) < (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)240)) / (((/* implicit */int) arr_3 [i_7]))))))))))));
        var_22 = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_7] [(unsigned char)13])) != (((/* implicit */int) arr_2 [i_7] [i_7]))))) != (((/* implicit */int) var_5)));
        arr_26 [13ULL] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_7])) % (((/* implicit */int) var_2)))) * (min((((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) (unsigned short)60726)) : (arr_15 [i_7]))), (((/* implicit */int) arr_5 [i_7]))))));
    }
}
