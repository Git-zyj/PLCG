/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207453
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
    var_19 += ((/* implicit */unsigned short) (~(var_14)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))), ((-(1143914305352105984ULL)))))) ? (((/* implicit */long long int) var_14)) : (((min((4503599358935040LL), (((/* implicit */long long int) var_4)))) * (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))));
        var_20 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_0 [6ULL]) >> (((var_14) - (2567231979U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (max((var_14), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_17)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
            var_21 *= ((/* implicit */unsigned long long int) var_3);
            var_22 = ((/* implicit */short) min((var_22), (min((var_2), (((/* implicit */short) (_Bool)1))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [(short)10] |= ((/* implicit */int) (unsigned short)40826);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) arr_11 [9ULL] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 21; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((arr_8 [i_0]) - (((/* implicit */int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [5LL] [5LL] [i_0] [i_4] [i_5]))) : ((+((+(4503599358935031LL))))));
                            var_24 *= min(((((!(var_15))) ? (((((/* implicit */_Bool) (short)960)) ? (((/* implicit */unsigned long long int) 4503599358935040LL)) : (var_18))) : (((/* implicit */unsigned long long int) arr_3 [i_5] [i_5] [(_Bool)1])))), (((/* implicit */unsigned long long int) 4503599358935031LL)));
                            var_25 += ((/* implicit */short) ((((-4503599358935031LL) + (9223372036854775807LL))) >> ((((((-2147483647 - 1)) - (-2147483645))) + (50)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_8 [i_0])));
                var_26 = ((/* implicit */_Bool) var_3);
            }
        }
    }
    var_27 += ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && ((_Bool)1)))) << (((((/* implicit */int) var_5)) & (((/* implicit */int) var_8)))))))));
    var_28 = ((/* implicit */short) ((max((((/* implicit */int) var_12)), (((((/* implicit */int) var_17)) | (((/* implicit */int) var_10)))))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) 4503599358935040LL)))))))));
}
