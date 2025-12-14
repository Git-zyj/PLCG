/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240076
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52222))) : (-7541047590614000179LL)))) ? (((((/* implicit */_Bool) 2147483647)) ? (var_9) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) 2147483647))))))))) ? (max((((/* implicit */int) (short)-1)), (-1704966349))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (16ULL)))) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_0))))));
    var_11 ^= ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_5))));
                    arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 17757825217442820780ULL)) ? (-8231499296708928894LL) : (((/* implicit */long long int) 1704966357)))), (((/* implicit */long long int) arr_3 [i_0]))))) ? (((((((/* implicit */int) (signed char)-3)) - (var_1))) + (((/* implicit */int) max(((unsigned short)3666), (((/* implicit */unsigned short) (short)8191))))))) : (((((((/* implicit */_Bool) -1704966349)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13313)))) - (((/* implicit */int) arr_5 [i_0]))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)2))));
                    var_14 = (-((((-(var_1))) | (((/* implicit */int) (unsigned short)65535)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (unsigned short)33184)), (((18446744073709551599ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13313)))))))));
                                var_15 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16ULL)) ? (((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18086)))))) : (-268435456)));
                                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-886878338) : (886878337)))) || (((/* implicit */_Bool) (short)-18087))));
                                var_18 = ((/* implicit */int) 5600449791037144785LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_19 ^= ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */int) arr_18 [i_5])) >> (((((-9223372036854775790LL) | (((/* implicit */long long int) 2067843014)))) + (9223372034786932794LL)))))));
        var_20 = ((/* implicit */short) (~(((/* implicit */int) (short)-18087))));
    }
}
