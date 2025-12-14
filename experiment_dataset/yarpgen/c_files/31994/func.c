/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31994
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
    var_11 = var_8;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-73)) != (((/* implicit */int) var_5)))))) : (min((var_7), (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_8 [(unsigned short)6] [i_1 + 3] [i_2]), (arr_8 [12LL] [i_1] [i_2])))) % ((-((+(((/* implicit */int) (signed char)72))))))));
                    var_14 &= var_7;
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_0 - 1] [i_1])) > (((/* implicit */int) var_2)))))) & (((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    var_15 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) 984282092U))), (((((/* implicit */int) (unsigned short)65535)) >> (((arr_3 [i_0 + 1]) + (1402643066)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            var_16 -= ((/* implicit */_Bool) (-(4294967295U)));
            var_17 = ((/* implicit */unsigned short) (((((-(549521355U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)12118)) && ((_Bool)0))))))) >> (((min((((/* implicit */unsigned int) arr_10 [i_0])), (max((((/* implicit */unsigned int) arr_0 [i_3] [i_0])), (var_7))))) - (168U)))));
            arr_12 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (((((/* implicit */unsigned long long int) arr_5 [(unsigned char)10])) * (var_8)))))));
            var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
            arr_13 [i_0] = ((/* implicit */unsigned short) (-(var_3)));
        }
        for (unsigned int i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            arr_17 [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) != (((/* implicit */int) var_5)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)72)))))))) ? ((~((~(((/* implicit */int) arr_15 [i_0 - 1] [i_4] [i_4])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_5 [i_4])))), (min((((/* implicit */unsigned short) var_5)), (var_9))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_22 [i_4] [i_4] [i_4 - 2] [i_4] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-12119)) ? (3982138578U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5516))))), (0U)));
                        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            arr_25 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) (+((-(((arr_5 [i_7]) + (((/* implicit */unsigned int) var_1))))))));
            var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) -609179533))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_7] [i_7] [i_7]))))))));
            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 4029791247659932513ULL))))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_5))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_15 [i_0 + 1] [i_7 - 1] [i_7 - 2]))))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 3110416109U))) - (((/* implicit */int) ((short) (short)12110)))));
    }
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_22 |= ((/* implicit */unsigned char) min((((((/* implicit */int) var_9)) << (((arr_28 [i_8]) - (1093736796U))))), (((((/* implicit */int) var_6)) << ((((+(-1LL))) + (12LL)))))));
        var_23 = ((/* implicit */unsigned short) (!((((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) arr_28 [i_8]))))));
        var_24 = max((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)17173))))))))));
        var_25 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((unsigned short) var_3))))) < (var_1)));
        var_26 = (short)-2715;
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_2)), (var_7))), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) min((1712423831U), (((/* implicit */unsigned int) var_1))))) == (2013043493117667727LL))))) : ((+((-(var_7)))))));
}
