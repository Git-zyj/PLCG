/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216500
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) : (var_2))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)23147)))), (((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((var_10) == ((((!(var_15))) ? ((((_Bool)1) ? (var_3) : (var_5))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2])) == (((/* implicit */int) (signed char)57)))))))));
                            var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_0] [i_1] [i_2] [i_3])))) && (((/* implicit */_Bool) var_3)));
                            var_18 ^= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))) | (0ULL))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) (unsigned char)91)))))));
                            var_19 |= ((/* implicit */short) min((((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (min((var_3), (var_3))))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))) | (((/* implicit */int) var_4))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned char)209)), (var_3)))))) ? (((/* implicit */int) var_11)) : (var_8)));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [(unsigned short)18] &= ((/* implicit */unsigned short) ((signed char) max((4106189435U), (((/* implicit */unsigned int) (_Bool)1)))));
                                var_21 = var_6;
                                var_22 += ((/* implicit */signed char) ((max((arr_6 [i_0] [i_1] [i_0] [i_4 - 2]), (((/* implicit */unsigned long long int) 6690192514799790580LL)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((-543673235) == (((/* implicit */int) (short)32767))))))));
                            }
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) ? ((~(1335679715))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17514)) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((((var_8) == (min((var_8), (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_4)) : (((int) (~(((/* implicit */int) var_11)))))))));
                            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) var_15))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_0)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (-413821478)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (short i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_25 *= ((/* implicit */short) ((signed char) var_8));
                                arr_27 [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (short)4095)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)52755)) : (((/* implicit */int) ((((/* implicit */int) (signed char)59)) == (1778024120))))))));
                                var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-127)), ((unsigned short)57109))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 += ((/* implicit */short) max((var_3), (var_8)));
    var_28 -= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
}
