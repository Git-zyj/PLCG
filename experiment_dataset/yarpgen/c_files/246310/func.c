/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246310
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_2))))) ? (((long long int) (signed char)-12)) : (((/* implicit */long long int) var_3))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1371042524431112029LL)))) ? ((-(((/* implicit */int) arr_0 [i_0 - 3])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (unsigned short)58907)))))));
        var_17 *= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) < (((/* implicit */int) (signed char)(-127 - 1)))))) >> (((((/* implicit */int) var_2)) - (11101)))))), (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) -317156882599070327LL)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)-124))))));
    }
    var_19 = ((int) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12)))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                arr_6 [i_1] [i_2] = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)82)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -652691968)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned short)0))));
                    var_20 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 4]))))), (var_4)));
                }
                var_21 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (var_4) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_8)) : (var_4))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (unsigned int i_5 = 4; i_5 < 11; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6161360850111718169LL)) && (((/* implicit */_Bool) -1172617347)))))) < (((((/* implicit */_Bool) arr_13 [i_5 - 2] [i_6])) ? (((/* implicit */long long int) var_5)) : (var_12))))) ? (((arr_2 [i_5 - 1]) % (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5 - 1]))))) : (var_6)));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((short) min((0LL), (((/* implicit */long long int) var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (short i_8 = 4; i_8 < 9; i_8 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_21 [i_8 + 3]) : (arr_21 [i_8 - 2])))) ? (min((((/* implicit */unsigned long long int) -1659332779)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5 - 1] [i_5 - 1] [i_8 - 1])) || (((/* implicit */_Bool) arr_21 [i_8 - 2])))))))))));
                                arr_27 [i_5 - 4] [i_5 - 4] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_5 - 3] [i_5 + 1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 3] [i_5])))))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-3465189249784335246LL))) : (((((((/* implicit */_Bool) 8178246474010064201LL)) ? (var_6) : (var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)208))))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3465189249784335245LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (6830673827697436714LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_5]) - (((/* implicit */int) var_14))))))))));
                                arr_28 [i_4] [i_6] [i_6] [i_5 - 3] [i_5 - 3] = ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_14 [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
