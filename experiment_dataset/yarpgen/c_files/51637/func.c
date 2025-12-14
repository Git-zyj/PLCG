/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51637
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_1])))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(max(((-(((/* implicit */int) (unsigned short)50524)))), (((/* implicit */int) ((3447717154644691660LL) == (((/* implicit */long long int) 2280119309U)))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1437934478U)) ? (1336348091U) : (((/* implicit */unsigned int) 1600738034))));
                }
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_1] [i_3]), (((/* implicit */unsigned long long int) var_0))))) ? (((arr_14 [i_3] [i_1] [i_0]) & (arr_14 [i_0] [i_1] [i_3]))) : ((-(arr_14 [i_0] [i_1] [i_3])))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_20 [(short)19] [i_1] = ((/* implicit */signed char) max((((long long int) (!(((/* implicit */_Bool) arr_16 [i_0]))))), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_1])))))))));
                        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) <= (((max((((/* implicit */unsigned long long int) (unsigned char)149)), (var_17))) & (((/* implicit */unsigned long long int) (~(1508040367U)))))));
                    }
                    var_21 = ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) 240296495U))))), ((~(((/* implicit */int) (short)-28433)))))) != ((-(((/* implicit */int) (signed char)24))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 5625053308677702363LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5625053308677702363LL)));
                    var_23 = ((_Bool) var_5);
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    arr_23 [i_5] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_5] [i_5])))));
                    var_24 = ((/* implicit */unsigned int) (+(((long long int) 8LL))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)134))))))), (max((arr_2 [i_0]), (arr_2 [i_0])))));
                                arr_29 [i_0] [i_0] [i_5] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))) ^ (max((((/* implicit */unsigned int) var_2)), (2958619208U))))), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_5] [14ULL]))));
                                arr_30 [i_0] [i_1] [i_5] [i_6] [i_5] [i_6] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (unsigned char)255)), (18U))), (((/* implicit */unsigned int) (!(((((/* implicit */int) arr_11 [i_0] [i_7] [i_5])) > (((/* implicit */int) var_16)))))))));
                                var_26 = max((((signed char) 2958619214U)), (((signed char) arr_7 [i_0])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(var_5)))))) ? (((/* implicit */long long int) ((unsigned int) max((694838465762246673LL), (((/* implicit */long long int) 399686906)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) ^ ((-(8708236784681264601LL)))))));
}
