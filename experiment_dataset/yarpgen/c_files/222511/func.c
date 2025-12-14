/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222511
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 |= var_5;
                var_20 &= arr_5 [i_1];
                var_21 += ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4710266546606441539ULL)) || (((/* implicit */_Bool) 5082345351183273642LL))));
    var_24 = ((/* implicit */signed char) (~((+(7752724549056437638ULL)))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_15 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 10329202853244205129ULL))));
                        arr_16 [i_2] [i_3] [i_4] [(unsigned char)15] = ((/* implicit */short) var_15);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 5082345351183273644LL))));
                        var_26 |= (~(((var_12) >> (((/* implicit */int) var_3)))));
                    }
                    var_27 = ((/* implicit */int) ((5082345351183273654LL) != (-8508801232632041968LL)));
                }
            } 
        } 
    } 
}
