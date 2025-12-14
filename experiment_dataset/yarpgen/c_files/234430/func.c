/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234430
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
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) var_5);
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */int) ((unsigned char) ((var_5) << (((((/* implicit */int) arr_1 [i_0])) - (40))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((max((((/* implicit */int) (_Bool)1)), (var_3))) / (arr_6 [i_0] [i_1 + 2])))) : (var_5)));
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0]))));
                    var_16 *= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) ((min((var_7), (var_4))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) var_6))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */int) min((((var_2) ? (arr_4 [i_1 - 2] [i_1]) : (arr_4 [i_1 - 1] [1ULL]))), (((/* implicit */unsigned long long int) (~(var_10))))));
                    arr_11 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((max((3418431983606054070LL), (var_5))), (-9134345281416167077LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) (_Bool)1)), (9134345281416167077LL))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                arr_19 [i_3] &= ((/* implicit */int) (_Bool)1);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_14 [i_6] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)11921)) != (((/* implicit */int) (_Bool)0))))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_17 [8U] [i_4]))) / (max((((/* implicit */int) arr_20 [i_3])), (var_3))))))));
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_4] [(short)7] = ((/* implicit */short) var_1);
                            var_19 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_6)), (var_4))), (((/* implicit */unsigned long long int) max((arr_23 [3ULL] [i_4] [i_4]), (arr_23 [i_3] [i_6] [i_4]))))));
                            var_20 = ((/* implicit */unsigned long long int) (+(arr_17 [i_4] [i_5])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned int) (((~(((var_4) ^ (((/* implicit */unsigned long long int) var_5)))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_7))))))));
}
