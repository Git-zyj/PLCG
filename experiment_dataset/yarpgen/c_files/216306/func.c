/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216306
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_18 |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)8))));
                    var_19 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (signed char)8))))))));
                    arr_9 [i_0] [2LL] [i_2] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_16)))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 2715961776143985891LL)))))))));
                }
                var_20 *= ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) (short)20358))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (long long int i_4 = 4; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_18 [6U] [i_5] [(unsigned short)10] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-20359))));
                    arr_19 [i_5] [i_3] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) 1435144717))));
                    arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) (-((~(-1435144718)))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [(signed char)4] [i_7]))))))))));
                                var_22 = ((/* implicit */signed char) (-((-((+(((/* implicit */int) arr_8 [i_5] [i_6] [i_7]))))))));
                                arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) (~((+((+(((/* implicit */int) (signed char)-1))))))));
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_4 - 2] [(unsigned char)12] = ((/* implicit */signed char) (+((+((-(1070855372)))))));
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (short)20367)))))))));
        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)169))));
        arr_32 [i_8] = (-((+((+(((/* implicit */int) var_1)))))));
    }
    var_26 |= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20359))));
}
