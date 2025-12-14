/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54624
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
    var_15 = (+(var_10));
    var_16 = var_12;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((unsigned long long int) (+(var_0)));
            var_18 = max((arr_0 [i_0 + 2]), (((/* implicit */unsigned long long int) (unsigned short)22499)));
        }
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned short) (+((+(var_10)))));
            arr_10 [9ULL] [(unsigned short)15] [(unsigned short)15] = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) 5286630923070891566ULL))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16552434885268567247ULL))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [11ULL]);
            var_20 *= ((unsigned long long int) (~(3495265638678210366ULL)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_23 [(unsigned short)7] [i_5] [i_0] [i_0] [i_0] |= 14552281424926984427ULL;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 2) 
                        {
                            var_21 += (~((-(var_11))));
                            var_22 += var_8;
                            arr_27 [i_4] = (~(arr_25 [i_7] [i_7 - 1] [(unsigned short)6] [i_7 - 1]));
                            arr_28 [15ULL] [2ULL] [i_5] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)22499))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_16 [i_4] [19ULL] [(unsigned short)19]))));
                        }
                        var_23 = ((11592055893173920800ULL) % (9977935907668292164ULL));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_24 = ((arr_18 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]) >> (((((/* implicit */int) var_9)) - (50515))));
                            var_25 *= ((/* implicit */unsigned long long int) var_4);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (16552434885268567247ULL)));
                            var_27 = ((/* implicit */unsigned short) (+(5447393104445185070ULL)));
                        }
                    }
                } 
            } 
            arr_33 [i_0 - 1] [i_4] |= (~(max((((((/* implicit */_Bool) arr_11 [5ULL] [10ULL] [i_0])) ? (var_1) : (var_7))), ((+(var_10))))));
            var_28 = (-(((unsigned long long int) (-(15973938331481692348ULL)))));
            var_29 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) 3800838825816010493ULL)))));
        }
        var_30 = (~(12492236806639250851ULL));
        /* LoopNest 3 */
        for (unsigned short i_10 = 2; i_10 < 17; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0))) : (((((/* implicit */_Bool) arr_31 [6ULL] [i_0] [(unsigned short)5] [(unsigned short)5] [i_12] [i_12 + 1])) ? (14787497421884514536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63))))), (14344903603425444669ULL)))))));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 2]))))), ((+(arr_8 [i_10 + 1])))))));
                        var_33 = ((unsigned long long int) 5951630549193207193ULL);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_13 = 3; i_13 < 19; i_13 += 2) /* same iter space */
    {
        arr_44 [i_13 + 1] = var_1;
        var_34 = 576460750155939840ULL;
    }
}
