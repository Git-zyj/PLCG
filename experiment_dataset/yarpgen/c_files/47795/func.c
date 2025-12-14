/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47795
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) 3772599574U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 10871491943986722801ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1 - 1]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (arr_8 [i_0] [i_1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = arr_2 [i_1 + 1];
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
        {
            for (int i_5 = 4; i_5 < 14; i_5 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((((/* implicit */long long int) 2853933176U)) > (((7716983211446798024LL) << (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (short)-26211))))))));
                    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 0LL)) ? (3330458235U) : (((/* implicit */unsigned int) 0))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 4; i_6 < 16; i_6 += 3) 
                    {
                        arr_22 [i_3] [i_6] [i_4] [i_5 + 1] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_4 - 2] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25416))) : (4044974875U)))))))));
                        var_20 = ((/* implicit */int) var_7);
                        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) 5)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_4 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (3998285849U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_18 [i_3 - 1] [i_4 + 1] [i_3 - 1])))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), ((short)17397)))) ? (((((/* implicit */_Bool) (short)1217)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (signed char)6)))))));
                        var_23 = ((/* implicit */int) 1393206563531751208LL);
                        arr_26 [i_3] [i_3] [i_5] [i_7] [i_7] = ((/* implicit */int) 4294967292U);
                    }
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((max((arr_5 [i_4]), (((((/* implicit */_Bool) -4711265079845893225LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))) - (111))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) % (var_14)));
}
