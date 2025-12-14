/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225367
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
    var_10 = var_9;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [11U] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) % (min((((/* implicit */unsigned int) (short)-17834)), (1619842658U))))));
        var_11 = ((unsigned long long int) arr_0 [i_0]);
        var_12 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_0 [i_0]))))) % (46813392U)));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_13 *= ((/* implicit */short) -986363850585108485LL);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (short)17852))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                    var_15 = ((/* implicit */short) -7991044595473209786LL);
                    var_16 = ((/* implicit */unsigned int) 9933376553880651188ULL);
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                arr_14 [2ULL] [1ULL] = ((/* implicit */unsigned char) ((-7991044595473209786LL) % (5203281952322140501LL)));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - ((-((+(var_9)))))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) 7991044595473209786LL))))) || (((/* implicit */_Bool) min((-8895471428041693992LL), (((/* implicit */long long int) (_Bool)0)))))));
                }
            } 
        } 
    }
}
