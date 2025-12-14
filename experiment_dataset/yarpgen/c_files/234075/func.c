/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234075
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -515667027))));
                        arr_8 [i_0] [i_1] [i_1] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24361))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)5517)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) / (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_2)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20629)) > (((/* implicit */int) (_Bool)0))));
                    }
                }
            } 
        } 
    }
}
