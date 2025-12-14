/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52446
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
    var_19 = ((/* implicit */_Bool) var_3);
    var_20 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (unsigned char)139)) : (183435283)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -453169115)) ? (-434574269) : (-128178174)));
                            arr_12 [i_1] [i_1] [i_2] [i_3] [(unsigned char)4] [i_2] [i_4] = ((/* implicit */int) (-(14529181226247541235ULL)));
                            var_23 = ((/* implicit */int) min((var_23), ((-(((/* implicit */int) (unsigned char)139))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1782438455)) ? (183435297) : (-1)));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1228346993)) ? (-128178199) : (2146435072)))) ? (((((/* implicit */_Bool) 4294967264U)) ? (2U) : (((/* implicit */unsigned int) -684792965)))) : ((-(2653328676U)))));
                        var_26 ^= ((/* implicit */int) 2029627240U);
                    }
                    var_27 = (-((~(-2061317811))));
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */int) (unsigned char)116);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)139))))) ? (((((/* implicit */_Bool) (short)-22096)) ? (3857070981U) : (((/* implicit */unsigned int) max((2053511659), (-434574267)))))) : ((-((-(4294967295U)))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((7215809U), (((/* implicit */unsigned int) (_Bool)1))))) ? (min((-2061317792), (((/* implicit */int) (short)-27643)))) : (((((/* implicit */_Bool) (short)-7817)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (short)-22115))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3785416927U)) ? (((/* implicit */long long int) 1602587507U)) : (8227661590642872622LL)))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
    {
        arr_23 [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)231)) ? (365959136) : (((/* implicit */int) (unsigned char)233))));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_26 [i_8] [i_7] [i_8] = ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2835708223U));
            arr_27 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4606691851834928667LL)) ? (((/* implicit */unsigned int) -365959155)) : (3785416927U)));
        }
        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1433931921U)) ? (2861035381U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            arr_30 [i_9] [i_9] = (((!(((/* implicit */_Bool) (short)-5573)))) ? (((/* implicit */int) (short)-1701)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22133))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            var_31 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (1834756893U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) -952579420)) ? (2486341370U) : (((/* implicit */unsigned int) 172507035)))) : (4294967295U));
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)55)) ? (1790984242U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))))))));
            arr_33 [i_7] [i_10] &= (_Bool)1;
        }
    }
    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
    {
        arr_36 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22097)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22096))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)246)))))))))));
        arr_37 [i_11 + 2] = ((/* implicit */unsigned char) max((179692325U), (1834756893U)));
        arr_38 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -226796661)) ? (((/* implicit */unsigned long long int) 509550381U)) : ((-(min((((/* implicit */unsigned long long int) (short)22088)), (18446744073709551611ULL)))))));
    }
    var_33 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4ULL))));
}
