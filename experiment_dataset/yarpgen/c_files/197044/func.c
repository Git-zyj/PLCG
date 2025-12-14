/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197044
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) (short)-32756)), (var_3))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32752)))));
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), ((short)32752)))) ? (((/* implicit */int) ((370693506U) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_0])), ((short)32729)))))))) : (((/* implicit */int) var_0))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min(((short)32751), ((short)0)))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_9))) : (((/* implicit */unsigned long long int) 3924273789U))))))));
                }
                arr_12 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (short)32744))))) ? (min((3924273789U), (((/* implicit */unsigned int) arr_1 [i_0] [i_1 - 1])))) : (max((3092910850U), (((/* implicit */unsigned int) (signed char)21))))))), ((~(var_11)))));
                /* LoopNest 3 */
                for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7778781963394676845ULL)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (short)14514))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) && (((/* implicit */_Bool) (short)32755))))), ((-(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(370693507U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [i_1 - 1])) ? (370693507U) : (((/* implicit */unsigned int) arr_16 [i_0] [i_1 - 1] [i_3] [i_4] [i_4] [i_5])))))))));
                                arr_21 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (6329454302758334869ULL) : (6329454302758334869ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)145)), ((short)-32756))))) : (min((((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) (_Bool)1))))), (0ULL)))));
                                var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4]))) : (((long long int) arr_5 [i_1] [i_1] [i_5]))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_11 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_3 [i_3 - 1]))))) : (((long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-14515)) || (arr_3 [i_0 - 1])))))));
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */short) ((((/* implicit */unsigned long long int) 3924273789U)) <= (min((((unsigned long long int) arr_4 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12117289770951216748ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (min((var_6), (((/* implicit */long long int) (short)-32438)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 370693507U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            {
                arr_26 [i_6 - 1] [i_6 - 3] [i_7] = ((/* implicit */short) (~(((/* implicit */int) ((var_0) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [(signed char)6])), (var_3)))))))));
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-32756))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 11024211937447856191ULL)))) : (((var_4) ? (var_9) : (((/* implicit */unsigned long long int) 3924273789U)))))))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_7))));
                    var_22 = ((/* implicit */long long int) (unsigned short)7681);
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) max((2264946198U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))));
                }
            }
        } 
    } 
}
