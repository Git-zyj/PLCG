/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230485
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
    var_12 = ((/* implicit */int) var_6);
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
    var_14 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) 9082403932147903503ULL)) ? (((((/* implicit */_Bool) 2229837449913361849ULL)) ? (2229837449913361853ULL) : (((/* implicit */unsigned long long int) 8115135579152100305LL)))) : (((/* implicit */unsigned long long int) ((9223372036854759424LL) / (((/* implicit */long long int) 2147483647))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 6; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((-763468229) + ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [0]))))))), (2229837449913361853ULL)));
                            arr_9 [i_0 - 1] [i_0 + 1] [i_0] [i_2 + 4] [i_3 + 1] [i_3] = ((/* implicit */_Bool) (-(4095ULL)));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */int) (+(4294967295U)));
                /* LoopNest 3 */
                for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((-1793835826) + (2147483647))) >> (((16601277676388396520ULL) - (16601277676388396503ULL)))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16216906623796189762ULL)) ? (((/* implicit */int) (_Bool)1)) : ((+((+(-763468233)))))));
                                arr_19 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */long long int) arr_6 [i_0] [i_0]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) 4641910508342925935LL);
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((3222098808U), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [(unsigned char)2] [i_5] [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967290U)) || (((/* implicit */_Bool) 1384081178)))))))) && (((/* implicit */_Bool) max((arr_15 [9LL] [i_5 + 1] [i_5] [i_5 + 1] [8]), (((/* implicit */unsigned int) (unsigned char)110)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 7; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) -2147483630);
                            var_19 = ((/* implicit */signed char) max((((2229837449913361853ULL) & (((/* implicit */unsigned long long int) 524284)))), (((/* implicit */unsigned long long int) ((((-763468233) + (2147483647))) >> (((762313860U) - (762313844U))))))));
                            arr_27 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((763468233) - (763468207)))));
                            var_20 = ((/* implicit */unsigned long long int) max((-524284), (((/* implicit */int) (unsigned char)211))));
                            arr_28 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) arr_0 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)75))))))) | ((-(-700318474)))));
}
