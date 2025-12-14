/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215811
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-4961)) <= (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((723153433U), (3571813868U)))), (max((arr_0 [i_0]), (((/* implicit */long long int) var_14))))))) ? (((unsigned int) ((int) (unsigned char)123))) : (3912230888U))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_11 [i_0] [i_0] [i_1]), (arr_11 [i_0] [i_0] [i_1])))), (max((max((((/* implicit */unsigned int) arr_9 [i_0])), (arr_3 [i_1]))), (((/* implicit */unsigned int) ((_Bool) var_8)))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)141)))))));
                        arr_14 [i_1] = ((/* implicit */int) ((signed char) var_14));
                    }
                    arr_15 [i_2] [i_1] [i_0] = ((/* implicit */signed char) 4217679553383351487LL);
                }
            } 
        } 
        var_22 = min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)133)) <= (((/* implicit */int) (unsigned char)123))))), (3362195483335730143LL));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4)))))) != ((-(((/* implicit */int) arr_18 [i_4] [i_4]))))));
        var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_3))))))));
    }
}
