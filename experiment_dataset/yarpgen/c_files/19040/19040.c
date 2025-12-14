/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = ((((((var_3 ? var_8 : var_17)) ^ (var_5 & 3408818898)))) ? ((886148398 ? (arr_0 [i_0 + 4]) : var_7)) : (((var_11 % -13717) ^ (((3408818923 ? 3384911186 : 235))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_21 = (min(-7048423354760314854, ((((arr_0 [i_0 + 3]) ? 3408818910 : var_18)))));
                            arr_10 [i_0] = (((((3408818940 ? 3408818898 : 3408818882))) ? (((((((arr_6 [i_0] [i_1] [i_2 - 1] [i_0]) ? 11398320718949236774 : var_19))) ? (((max(var_14, 65)))) : ((var_19 ? var_11 : -22970))))) : ((-var_7 ? 7048423354760314854 : 766))));
                            var_22 = ((8634518256571524745 ? -6599242416244946242 : -127));
                        }
                    }
                }
                var_23 = (min(var_23, (((((-var_5 ? ((121 ? (arr_5 [1]) : var_6)) : ((((arr_7 [i_0] [i_0] [4]) & 122))))) ^ ((((((var_19 ? var_9 : 886148382))) ? ((((arr_5 [0]) ? 1111854212 : 2076185769))) : (min((arr_7 [i_0] [i_0] [4]), 7867466797863452066))))))))));
            }
        }
    }
    var_24 = ((((((((var_8 << (4294967295 - 4294967285)))) ? ((var_6 ? var_13 : var_12)) : (((163 ? -2 : 30763)))))) ? ((((max(var_7, var_2))) ? (((max(var_9, var_4)))) : ((63064 ? var_1 : var_2)))) : var_1));
    var_25 = (max(var_25, ((var_7 ? (((!(((886148413 ? -4334479577589019322 : var_1)))))) : (min((~var_9), var_1))))));
    #pragma endscop
}
