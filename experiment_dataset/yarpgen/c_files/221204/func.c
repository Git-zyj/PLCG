/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221204
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
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((arr_0 [i_0 - 2] [i_0 + 1]) >= (((/* implicit */long long int) 3)))))));
        arr_3 [i_0] [i_0 - 4] = ((/* implicit */short) (((((+(((/* implicit */int) var_5)))) <= (((/* implicit */int) ((((/* implicit */int) var_11)) == (-4)))))) ? (max(((+(-11))), (((int) arr_0 [i_0 + 1] [10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)20609)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) var_11)), (5481042206141276052LL)))));
        var_16 = ((/* implicit */unsigned char) (-(var_9)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20609))) ^ (13003736783690596311ULL))) : (((/* implicit */unsigned long long int) ((var_4) % (((/* implicit */long long int) -4)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [6U]);
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) - (min((var_0), (((/* implicit */unsigned long long int) var_4)))))))));
            var_18 &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) ^ (((var_7) - (((/* implicit */int) (unsigned char)48)))))) ^ (((/* implicit */int) max(((!(((/* implicit */_Bool) 8221520430656622500ULL)))), ((!(((/* implicit */_Bool) (unsigned char)207)))))))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned char) var_3);
                            var_20 = (~((-((~(var_2))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_6 = 4; i_6 < 21; i_6 += 4) 
            {
                arr_19 [i_1] = ((/* implicit */long long int) (+((-((+(((/* implicit */int) (unsigned char)0))))))));
                var_21 = ((/* implicit */unsigned int) arr_12 [i_1] [i_2] [i_1]);
                arr_20 [i_1] [6LL] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [i_1] [i_2 - 2] [i_6])) & (((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                var_22 ^= ((/* implicit */unsigned long long int) (+((+(min((3571734967U), (((/* implicit */unsigned int) (short)20609))))))));
                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_8 [i_1] [i_1] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            }
        }
        for (int i_7 = 3; i_7 < 21; i_7 += 4) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) (+(5922639788886014977ULL)))) ? (((/* implicit */unsigned int) (+(var_9)))) : ((-(1791405140U))))) << (((12477974553925196923ULL) - (12477974553925196905ULL))))))));
            var_25 |= ((/* implicit */long long int) var_14);
            var_26 -= ((/* implicit */short) max(((unsigned char)174), ((unsigned char)213)));
        }
    }
    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)240)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned long long int) -5874279269480500462LL))))) ? ((~(arr_8 [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-20616)), (arr_13 [2ULL] [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned long long int) var_13)), (13933250118031651311ULL)))))));
        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((arr_8 [i_8] [i_8] [i_8]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10253))))), (((/* implicit */unsigned long long int) ((-3715578859949156215LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-10253)))))))))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(3251862789U))) >> (((arr_5 [i_8 - 1]) - (498384443U))))))));
        var_30 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_1))))));
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        var_31 *= ((/* implicit */unsigned int) arr_29 [i_9] [i_9]);
        var_32 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) == (((((/* implicit */unsigned long long int) var_2)) - (var_3))))));
        var_33 = min((2387902236354912230ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32762)))))))));
    }
    var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)184))));
    /* LoopSeq 1 */
    for (unsigned int i_10 = 1; i_10 < 17; i_10 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) -1160604535)) | (14680064U))))) ? (((/* implicit */int) max(((unsigned char)199), ((unsigned char)174)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_10] [i_10])) <= (((/* implicit */int) (!(((/* implicit */_Bool) -7452306964156713019LL))))))))));
        var_36 = ((/* implicit */unsigned int) ((-7452306964156713019LL) ^ (var_4)));
        var_37 = ((/* implicit */int) arr_9 [i_10] [i_10 + 2] [i_10 + 1]);
    }
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)228)) && (((/* implicit */_Bool) (-(((3251862789U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
}
