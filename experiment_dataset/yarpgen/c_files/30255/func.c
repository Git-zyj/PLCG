/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30255
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
    var_14 = ((/* implicit */signed char) 7002420338967255662LL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */signed char) 7002420338967255672LL);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */signed char) (unsigned short)50001);
                        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)50000))) >> (((((max((arr_0 [i_3]), (((/* implicit */int) (unsigned short)15554)))) << (((((/* implicit */int) (unsigned short)49996)) - (49995))))) - (1625851474)))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [13U] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 7002420338967255662LL)) / (15375858016790384451ULL)));
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 19; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (unsigned short)15540);
                            var_18 = ((((/* implicit */_Bool) 0U)) ? (-3810161563084729557LL) : (((/* implicit */long long int) -1906166380)));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2492448336U)) ? (((((/* implicit */_Bool) 15375858016790384428ULL)) ? (-3810161563084729550LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15375858016790384428ULL)) && (((/* implicit */_Bool) 18444492273895866368ULL))))))));
                            arr_21 [i_1] [i_5] [i_4 + 1] [i_2 + 1] [i_1] [i_0] &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -1883732819)) ? (-3810161563084729545LL) : (((/* implicit */long long int) -1711967423)))));
                        }
                        for (int i_6 = 4; i_6 < 18; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_4 + 1] [i_0] = ((/* implicit */unsigned int) ((_Bool) 18014397435740160ULL));
                            arr_25 [i_0] [i_4] = ((/* implicit */signed char) 5412673440631199516ULL);
                            arr_26 [i_0] [17LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967294U)) || (((/* implicit */_Bool) (unsigned short)1823))));
                        }
                    }
                    for (long long int i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)15538), ((unsigned short)15560))))));
                        var_21 = ((/* implicit */unsigned long long int) ((min(((+(arr_1 [i_2 - 1]))), (((/* implicit */unsigned long long int) min((arr_4 [9U] [9U]), (((/* implicit */long long int) arr_6 [18] [i_1] [i_0]))))))) != (max((((/* implicit */unsigned long long int) -20LL)), (3070886056919167161ULL)))));
                        var_22 = ((((/* implicit */_Bool) 15375858016790384451ULL)) ? (((((/* implicit */_Bool) 2007560716)) ? (6665623518081428055LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)15558)), (2110532409U)))))) : (((/* implicit */long long int) arr_5 [i_1])));
                        /* LoopSeq 3 */
                        for (int i_8 = 3; i_8 < 20; i_8 += 1) 
                        {
                            arr_34 [i_0] [i_1] [i_2] [i_7 - 2] [i_8 + 1] &= ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (signed char)-76)));
                            var_23 = ((/* implicit */signed char) arr_5 [(signed char)19]);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = 3810161563084729557LL;
                            arr_38 [i_9] = ((/* implicit */unsigned int) (signed char)28);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 1) 
                        {
                            arr_42 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_7] [i_2] [i_1] [i_0]);
                            var_25 ^= ((/* implicit */signed char) ((unsigned int) arr_39 [i_7] [i_2 + 1] [i_0] [i_0]));
                            var_26 += ((/* implicit */unsigned short) 5412673440631199536ULL);
                            arr_43 [i_1] [i_1] [i_7 - 2] |= ((/* implicit */long long int) ((unsigned int) 1571893893U));
                        }
                    }
                    arr_44 [15ULL] [15ULL] [i_2 - 1] [15ULL] = ((/* implicit */int) -7002420338967255687LL);
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 18; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) var_13);
                                arr_51 [i_0] [i_0] [i_0] [i_0] [i_11] [i_0] = -3810161563084729557LL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
