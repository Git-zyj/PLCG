/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54460
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
    var_10 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-492794011)))) ? (-492794011) : (((/* implicit */int) (unsigned short)62487))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) (unsigned short)26172)) <= (((/* implicit */int) min(((unsigned char)255), ((unsigned char)141))))))));
                    var_11 ^= ((/* implicit */_Bool) (unsigned char)112);
                }
                for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    arr_13 [i_0 + 1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                    arr_14 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)200);
                }
                arr_15 [i_0] = ((/* implicit */unsigned short) (unsigned char)112);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3197633275067803091ULL))));
        var_12 = (-(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)112), (((/* implicit */unsigned char) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_13 = ((/* implicit */short) min((max(((unsigned short)34343), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) arr_16 [(_Bool)1]))));
            arr_23 [i_4] [i_4] [i_5] = (-(((unsigned long long int) var_9)));
        }
    }
}
