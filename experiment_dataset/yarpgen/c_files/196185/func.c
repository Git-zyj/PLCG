/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196185
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)11569))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) : (max((((unsigned long long int) (unsigned char)177)), (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */int) var_1);
        var_19 &= ((/* implicit */int) var_12);
        var_20 = ((/* implicit */signed char) ((var_13) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) var_6)) : ((+(6854894883565883493ULL)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((8520989721255212396LL), (((/* implicit */long long int) (unsigned short)34773))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_7))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = max((-1982871524), (((/* implicit */int) (signed char)-73)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_15 [i_1] [i_4] [i_1] [(unsigned short)4] [i_1] [i_1] = 17146024112611423204ULL;
                            arr_16 [i_1] [i_4] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)17761)))) ? (((/* implicit */int) arr_14 [i_2 - 3] [i_2] [i_2 - 3] [i_1 - 3] [i_5])) : (((/* implicit */int) var_12)))))));
                            arr_17 [i_1] [i_1] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_1 + 3] [i_3] [i_3] [i_2 + 2] [i_4])) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (var_10)))));
                        }
                        var_25 = ((/* implicit */_Bool) (-((+((+(arr_6 [i_1] [i_3 - 3] [i_3 + 1])))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) (+((-(var_4)))));
    }
    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_27 [i_6] = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)59170))))) + (max((var_6), (((/* implicit */unsigned int) (signed char)-60)))))));
                        var_27 = ((/* implicit */short) var_4);
                        arr_28 [i_6] [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_21 [i_6] [i_6]))), (((((/* implicit */_Bool) 1990902934)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_22 [0U] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1540751512759942196ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) : (var_6))))));
                        arr_29 [i_6] [(signed char)0] [i_6 + 3] [i_6] = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
        var_28 = max((var_9), (var_8));
        arr_30 [i_6] = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))) || (((/* implicit */_Bool) var_1))));
    }
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((2021992026298690178ULL) >= (((/* implicit */unsigned long long int) -9141308618520508057LL))))), (((8062879217026949259ULL) << (((var_10) - (11385036507118630715ULL))))))) == (min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) var_15)))))))));
    var_30 = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)-26))) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (2875380866785358882ULL))) : ((+((-(var_8))))));
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_8))))))))));
}
