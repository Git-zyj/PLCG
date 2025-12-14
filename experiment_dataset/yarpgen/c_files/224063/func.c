/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224063
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_13)) - (19453)))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) / (var_0))) : (((/* implicit */long long int) min((((((/* implicit */int) var_6)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_6)), (var_3)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) ((693559920U) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */long long int) max((((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)118)))), (((/* implicit */int) (_Bool)1))))) : (var_0)));
                            var_15 *= ((/* implicit */unsigned short) ((((((/* implicit */int) min((var_10), (var_3)))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)17793)) : (((/* implicit */int) (unsigned short)17793)))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_1))) - (3697846072U)))));
                            var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_4)));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -4872637285758491267LL))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_6)) != (((/* implicit */int) var_11)))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (49))) - (15))))))))) - (((/* implicit */int) var_9))));
                arr_11 [(unsigned short)5] = ((/* implicit */long long int) ((max(((~(((/* implicit */int) (unsigned short)62870)))), (((/* implicit */int) var_9)))) >> (((((((((((/* implicit */int) var_3)) | (((/* implicit */int) var_3)))) + (2147483647))) << (((min((((/* implicit */unsigned int) var_13)), (var_7))) - (19488U))))) - (2147483556)))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */long long int) var_7)) + (var_0))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) + (855133588961391978ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62186)) ? (-19898762) : (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_1))) ? (15619420908111060278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_2)))))))), (((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)31877))))))))))))));
                                var_21 -= ((/* implicit */_Bool) max((max((((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_6)) - (((/* implicit */int) var_11)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) var_3)) * (((/* implicit */int) var_5)))))))));
                                arr_22 [i_0] [i_5] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((((/* implicit */int) max((((/* implicit */signed char) var_6)), (var_3)))) == ((-(((/* implicit */int) (_Bool)1))))))));
                    arr_23 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_8))))) - (70)))))) ? (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)31877)))) >> (((((15619420908111060278ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (15619420908111060276ULL))))) : (((/* implicit */int) var_6))));
                }
            }
        } 
    } 
    var_23 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -1070100474))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_4)))) - (5135)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL)))) ? (max((((/* implicit */unsigned long long int) var_2)), (16563153078420997533ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17793)) / (((/* implicit */int) var_13)))))))));
    var_24 = ((/* implicit */unsigned int) (_Bool)1);
}
