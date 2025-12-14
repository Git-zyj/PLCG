/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29145
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (0ULL)))) >> (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_5)))))), (((unsigned long long int) var_1))));
            var_13 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_8))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 13532227849539647873ULL)))) ? (((((/* implicit */_Bool) 9ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) (~(2685014440U)));
                        arr_15 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (8621285759721084827ULL)))));
                    }
                } 
            } 
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(var_7))))));
            arr_16 [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_2] [2LL] [i_0 - 3])) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0 - 1]))));
            var_16 = ((/* implicit */unsigned long long int) var_2);
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_19 [i_0 - 2] [i_0 + 1] [i_0 - 2] = ((/* implicit */signed char) (-(var_7)));
            var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)));
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 7; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_28 [i_0 - 3] [i_5] [i_0 - 3] [i_0 - 3] [i_6 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6]))) && (((/* implicit */_Bool) max((arr_26 [i_6 + 3] [i_6 - 1] [i_6] [i_6 + 3] [i_6]), (((/* implicit */short) (_Bool)0)))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
            } 
        }
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (_Bool)1))))))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)))), (((signed char) var_5))))))));
    var_21 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)43164)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (var_3));
}
