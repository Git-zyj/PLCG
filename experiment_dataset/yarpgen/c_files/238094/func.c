/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238094
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                var_17 = ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) 9223372036854775807LL);
                            arr_12 [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_12);
                            arr_13 [i_2] [11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)48789)) >= (1758806446))) ? (((/* implicit */int) arr_7 [i_2 + 3] [i_2 - 1] [i_2 - 1] [i_2 - 3])) : (((var_16) | (var_7))))))));
                            var_19 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 2])) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112)))))))), (min((var_13), (((/* implicit */unsigned long long int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                            arr_14 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_2] [i_2 - 3]) ? (((/* implicit */unsigned long long int) var_5)) : (arr_8 [i_0] [i_1] [i_2 + 3])))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9412)) ? (((/* implicit */unsigned long long int) ((min((9223372036854775807LL), (((/* implicit */long long int) arr_7 [8ULL] [i_5] [8ULL] [8ULL])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) arr_25 [i_4] [i_5] [i_7 + 1] [i_5])) : (((/* implicit */int) (unsigned short)0)))))))) : ((((+(var_13))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_8] [i_4] [i_4])), (arr_17 [i_5])))))))));
                                arr_28 [i_7] [i_7] [i_6] [0LL] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (short)10558)) / (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_11 [i_7 - 1] [i_7 + 1] [i_7 - 1] [15U] [i_4])))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_5] [i_4])))))));
                var_22 = ((/* implicit */unsigned short) -7337841450717871814LL);
                var_23 = ((/* implicit */unsigned short) (+(min((((((/* implicit */int) var_6)) << (((/* implicit */int) arr_18 [i_4])))), (((/* implicit */int) ((unsigned char) var_15)))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(min((4296408764759843302ULL), (((/* implicit */unsigned long long int) (signed char)124)))))))));
                            var_25 += ((/* implicit */unsigned short) var_7);
                            arr_34 [(_Bool)1] [i_5] [i_9] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (arr_20 [i_10])))) ^ (((/* implicit */int) arr_18 [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((8045594896404073910ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25717)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)249))));
}
