/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37917
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1]))))) != ((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_4] [i_2] [i_3] [i_4 + 1] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0 - 2] [i_0]);
                            var_18 = ((/* implicit */_Bool) var_13);
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 3227238874U)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) var_13)) : (min((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_0] [11ULL]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_19 [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 6243762703160860852ULL)) ? (arr_18 [i_0 + 2] [i_0 + 2] [i_2] [i_0] [i_6] [i_1] [i_0]) : (arr_18 [i_0 - 2] [i_1] [i_1] [i_0] [i_6] [i_0] [i_1]))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_6] [i_1] [i_2] [i_0] [i_6] [i_1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                            arr_21 [i_0] [i_1] [i_1] [i_5] [10LL] |= arr_1 [i_0] [i_0];
                        }
                    } 
                } 
            }
            for (short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-8)) <= (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
                arr_25 [i_0] [i_0] [i_7] [i_7] = ((unsigned int) 130944U);
                arr_26 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_7] [i_0] [i_0] [i_7] [i_7]))));
            }
            for (unsigned int i_8 = 3; i_8 < 13; i_8 += 3) 
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) (+((+(-1831549211)))))) : (((arr_3 [i_0] [i_0] [i_8]) % (((/* implicit */long long int) min((var_2), (((/* implicit */int) (unsigned short)2)))))))));
                var_20 = ((/* implicit */unsigned long long int) (((+(1831549220))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)16806)) || (((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 + 2] [i_8] [i_0 + 2] [i_0] [i_8 + 1] [i_8 + 1])))))));
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(4257887887U)));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_7 [i_0 - 1])))))) + (min((((int) var_7)), (((/* implicit */int) (!(((/* implicit */_Bool) 1473331706)))))))));
                arr_30 [i_1] [i_0] [i_0] = max((((/* implicit */unsigned long long int) -8)), (8456445251809989188ULL));
            }
            arr_31 [i_0] = ((/* implicit */unsigned long long int) ((2457629681U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((_Bool) var_13)))))));
        }
        for (short i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            arr_35 [i_0] [i_9] [i_0] = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) % (var_9))) + (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) 652856929)))))) | (((/* implicit */unsigned long long int) (~(var_13)))));
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
            arr_37 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((1843083372) != (((/* implicit */int) (signed char)-121))))), ((signed char)15)))) ? (((/* implicit */long long int) (-(827429427U)))) : (-757057441423345894LL)));
        }
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_2)) ? (arr_7 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26948)))))));
        var_23 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16746))))))), (((((/* implicit */_Bool) ((int) (signed char)-122))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((signed char) var_12)))))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (((var_6) / (((/* implicit */long long int) var_4))))))) ? ((+(3125228906U))) : (((/* implicit */unsigned int) var_16))));
}
