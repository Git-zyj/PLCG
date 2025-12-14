/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237790
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
    var_11 = ((/* implicit */unsigned char) ((int) 757443210));
    var_12 = ((/* implicit */unsigned long long int) ((var_10) >= (-757443233)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 - 3])) ? (((int) arr_5 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2]))));
            arr_7 [i_0] = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
            arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) -757443233);
            var_14 = (-(max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (-1462933582) : (-1113400162))), (((int) (unsigned char)56)))));
        }
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_15 = ((((-757443233) / (((/* implicit */int) arr_3 [i_0 - 3])))) % ((-(272083602))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 485862522))) ? (((/* implicit */int) ((((arr_2 [i_2]) == (((/* implicit */unsigned long long int) 757443234)))) || (((((/* implicit */unsigned int) arr_0 [i_2])) < (4294967270U)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) <= (((((/* implicit */_Bool) 601948801)) ? (134217728ULL) : (((/* implicit */unsigned long long int) -485862523))))))))))));
        }
        for (int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            var_17 = (unsigned char)64;
            var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(-485862514))))));
        }
        for (int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_16 [17U] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((~((~(1457008873))))), (((/* implicit */int) arr_3 [i_0]))));
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(16143749729941936940ULL))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_5] [i_0] = var_7;
            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) arr_12 [i_0 - 2] [16ULL])) ? (arr_18 [i_0 - 1] [i_0 - 3]) : (arr_18 [i_0 + 1] [i_0 - 3])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)170)))) ? ((-(-757443254))) : (272083602)));
                        var_22 = ((/* implicit */int) arr_21 [i_6]);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_29 [i_8] = 1999607677;
        arr_30 [i_8] = ((/* implicit */unsigned long long int) 485862519);
    }
    var_23 = ((/* implicit */int) (((~(var_2))) ^ (((/* implicit */unsigned long long int) var_9))));
}
