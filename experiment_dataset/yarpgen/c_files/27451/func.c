/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27451
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((((/* implicit */_Bool) max((var_9), ((~(((/* implicit */int) arr_2 [i_0]))))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        var_16 *= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)834)))) ? (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) (~(1428737205U)))) != (-8936426614122104121LL))))));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_18 &= ((/* implicit */signed char) ((max((6ULL), (((/* implicit */unsigned long long int) (signed char)-78)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)64709)))))));
        var_19 &= ((/* implicit */signed char) min((min((arr_4 [i_1 + 1]), (arr_4 [i_1 - 2]))), (((arr_4 [i_1 + 2]) & (arr_4 [i_1 - 1])))));
    }
    for (short i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (signed char)127);
                    var_21 = ((/* implicit */short) var_7);
                    var_22 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_1))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)854)) ? (arr_4 [i_2 + 2]) : (arr_4 [i_2 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_2 + 2])))) : (min((((/* implicit */long long int) (unsigned short)64718)), (arr_4 [i_2 - 1])))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10402656331648911620ULL)) ? ((((!(((/* implicit */_Bool) arr_4 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) 1428737205U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (1896893075U))))) : (((/* implicit */unsigned int) arr_9 [i_3]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 22; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)52439)) ? (arr_9 [i_2 + 2]) : (((/* implicit */int) var_3)))), (arr_9 [i_2 + 2])));
            var_26 = ((((/* implicit */_Bool) (short)-4981)) ? (((max((((/* implicit */unsigned int) (unsigned short)53976)), (3561474133U))) << (((((/* implicit */_Bool) (short)4987)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5))))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))), (max((((/* implicit */unsigned int) arr_8 [i_2])), (1U))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_27 = min((min((min((arr_10 [i_5 + 1] [i_2]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_9 [i_2 - 1])))), (((/* implicit */unsigned long long int) (((-(arr_4 [i_2 - 1]))) ^ (arr_4 [i_5])))));
                var_28 = ((/* implicit */signed char) (~(var_7)));
            }
        }
        for (signed char i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            var_29 *= ((/* implicit */unsigned int) (short)4964);
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_21 [i_8] [i_8] [i_8]))));
                            var_31 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_15 [i_7]) : (((/* implicit */int) (unsigned short)64689)))), (((/* implicit */int) ((3061417263105656922LL) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) == (((/* implicit */int) arr_11 [i_2 + 2] [i_9 + 2] [i_2]))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */int) var_14);
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_2])), (1274755259U)))) ? (((/* implicit */int) ((unsigned short) ((short) arr_32 [i_2] [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_26 [i_7 - 1] [i_7 - 1] [i_2] [i_12] [i_12]))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (arr_25 [i_2] [i_2 + 1])))) ? (((((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) var_10)))) ? (var_12) : (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) var_0))));
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) 1428737188U)), (arr_4 [i_2 - 1]))), (((/* implicit */long long int) arr_17 [i_2 + 1] [(short)18] [i_2 + 1] [i_2 + 1]))))) - (((12931374002705156956ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))))))))));
    }
    var_36 = ((/* implicit */unsigned char) min((((((((/* implicit */long long int) var_12)) + (var_11))) * (((/* implicit */long long int) ((/* implicit */int) min((var_1), ((_Bool)0))))))), (((/* implicit */long long int) max(((signed char)-12), (((/* implicit */signed char) (_Bool)0)))))));
    var_37 = max((((/* implicit */long long int) min((var_13), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) == (var_4))))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1340803835))))), (var_2))));
}
