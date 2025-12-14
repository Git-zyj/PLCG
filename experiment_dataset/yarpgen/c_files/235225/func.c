/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235225
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
    var_10 -= ((/* implicit */_Bool) (unsigned short)65535);
    var_11 -= ((/* implicit */unsigned short) (-((-((+(-504277369397919969LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0]))))), ((+(arr_2 [i_1] [i_1] [i_1 + 2])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)0))));
                                var_13 = ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((int) 2106602031))) : (((-1889061708402210519LL) / (-1889061708402210519LL))))) <= (((/* implicit */long long int) (-2147483647 - 1))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (0)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [7] [i_4] [i_3 - 3] [i_2] [15] [i_0] [i_0])) / (2124521576)))) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_4 [i_1])))))) : ((-((-(((/* implicit */int) arr_8 [(_Bool)1] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) > (var_0)))))) < (max((((/* implicit */int) (short)-14224)), (0)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 824704383)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6845742689486622666LL)) ? (-641377063) : (((/* implicit */int) (unsigned short)0)))))))) : ((~(((/* implicit */int) min(((unsigned short)65535), (var_3))))))));
}
