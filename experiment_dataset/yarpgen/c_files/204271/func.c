/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204271
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))));
        arr_2 [i_0] = ((max((((/* implicit */long long int) min((2105139458U), (((/* implicit */unsigned int) arr_1 [(signed char)3]))))), (((((-15LL) + (9223372036854775807LL))) << (((((-4369755700604227283LL) + (4369755700604227329LL))) - (46LL))))))) >> (((/* implicit */int) ((unsigned char) ((_Bool) 9221120237041090560LL)))));
        var_19 = ((/* implicit */_Bool) arr_0 [5LL]);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned int) (((-(((/* implicit */int) var_10)))) - (((/* implicit */int) arr_5 [i_1] [i_2]))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (_Bool)1))))), (2467940226U))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 7; i_4 += 3) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) (unsigned short)14515)) > (((/* implicit */int) arr_1 [i_1]))))) - (((/* implicit */long long int) max((((/* implicit */int) (signed char)-45)), (((((/* implicit */int) (signed char)89)) * (((/* implicit */int) arr_10 [i_1] [1ULL] [i_1] [i_4])))))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_7 [i_3]))));
                            var_22 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) (unsigned char)166))))), (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_12 [i_1 + 1] [i_1 + 2] [i_2] [(signed char)0] [i_4])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3689933398U)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_1])))))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? ((-(var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 27U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (signed char)-125))))))));
                            arr_14 [i_4] [i_3] [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_7 [i_1 + 2])))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)117))))) ? (((/* implicit */int) ((short) var_16))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_10)))))))));
                            var_23 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (_Bool)1))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-96)) ? (min((var_1), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_17))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_1)))))));
}
