/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38522
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [(signed char)9]);
        var_16 = ((/* implicit */signed char) (unsigned short)49178);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_6 [(unsigned char)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [(unsigned char)2] [i_1 + 3])) : (((/* implicit */int) (signed char)-32))));
        arr_7 [15] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 931534329U)) ? (3363432957U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)7])))))));
        var_17 = ((/* implicit */unsigned short) 5539208346520539069ULL);
    }
    var_18 = ((/* implicit */signed char) ((max((((/* implicit */long long int) 931534329U)), ((-(-1LL))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (signed char)-18))))) : (((/* implicit */int) (short)27058)))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)127)))), (((((/* implicit */_Bool) (~(1652509462)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [12]))) : (((14180405390841970198ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) (-2147483647 - 1))))))) || (((/* implicit */_Bool) min((arr_13 [12]), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (894731867))))))));
            var_20 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_13)))) <= (min((1652509450), (-1169788192)))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned long long int) ((short) (unsigned short)41511));
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_4])) ? ((-(((/* implicit */int) (_Bool)0)))) : (arr_13 [i_4])))));
    }
}
