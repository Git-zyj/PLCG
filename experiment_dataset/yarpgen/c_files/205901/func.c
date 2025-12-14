/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205901
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)24211)) : (((/* implicit */int) (short)-18048)))) > (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_18)))))))) > (((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-88))))) << (((((/* implicit */int) var_8)) - (8845))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)87)) < ((+(((/* implicit */int) arr_1 [i_1] [6]))))))) < ((~((~(((/* implicit */int) (signed char)-46))))))));
                    var_21 = ((/* implicit */short) (~(((arr_2 [10ULL] [i_1] [10ULL]) << (((arr_2 [i_0] [i_1] [i_2]) - (15025624673265134505ULL)))))));
                }
                for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (short i_5 = 3; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_22 -= arr_2 [i_1] [i_3 - 3] [i_1];
                                var_23 &= ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_10 [i_4 - 1])) ^ (36028796951855104ULL))));
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */short) ((_Bool) (signed char)86));
                }
                var_25 = ((/* implicit */short) (+(((((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0])) == (((/* implicit */int) arr_3 [i_0])))) ? ((-(-1531358351502663561LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))))));
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (((_Bool)0) && (((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) var_6)));
    var_27 = ((/* implicit */signed char) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (18410715276757696520ULL))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_9))))))) : ((((+(-16LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-18056)) : (((/* implicit */int) var_9)))))))));
}
