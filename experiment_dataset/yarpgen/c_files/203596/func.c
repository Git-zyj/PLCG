/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203596
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) ((max((8764228155151106933ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) >> (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) max((max((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) 1603274426943800802LL)))), (arr_2 [i_0])));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) 255U)) && (((/* implicit */_Bool) var_12))))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */long long int) 3348482800U)), (-5256839264966436386LL))))));
                }
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) min((arr_15 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 3]), (arr_15 [i_3 + 2] [i_3 + 3] [i_3 - 1] [i_3])))) : ((-(((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))))));
                                var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) arr_9 [i_3] [i_3 + 3] [5LL]))))) <= ((+(137438953471ULL)))));
                                var_17 = ((/* implicit */_Bool) (-(((min((((/* implicit */long long int) var_3)), (var_2))) + (((/* implicit */long long int) var_7))))));
                            }
                        } 
                    } 
                    var_18 ^= var_8;
                }
                for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) (signed char)-79);
                    arr_21 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3450854504U)) ? (((/* implicit */unsigned int) 40395001)) : (946484496U)))));
                    var_20 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_1] [i_0]))) < (1739904071509558754LL))))) / (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_6])) ? (var_11) : (((/* implicit */long long int) arr_4 [(signed char)4] [i_1]))))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((7581079302161103022ULL), (((/* implicit */unsigned long long int) 38540913)))))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_21 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((min((3348482800U), (((/* implicit */unsigned int) (unsigned char)204)))) << ((((-(var_9))) - (6269120940395501437LL)))))), (-1739904071509558754LL)));
                    var_22 ^= (((((~(2305843009213693951ULL))) / (((/* implicit */unsigned long long int) 720836720)))) >> (((-1739904071509558761LL) + (1739904071509558763LL))));
                    arr_25 [i_0] [i_0] [i_1] [i_7] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (max((arr_4 [i_0] [i_0]), (arr_4 [i_1] [i_0]))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(min((max((arr_9 [i_7] [i_1] [i_0]), (var_7))), (((/* implicit */unsigned int) -38540907)))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) (~(946484499U)));
}
