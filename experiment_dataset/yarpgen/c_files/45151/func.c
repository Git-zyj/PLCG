/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45151
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
    var_16 = ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)2548)) : (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2548))) - (1755796375076553132ULL))))) / (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (unsigned short)224)), (551967221U)))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 341737679)) ? (var_4) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 8432494205713193175LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (1755796375076553132ULL))) : ((-(var_15))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_10)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((150141350275616249ULL), (1755796375076553132ULL)))) ? (((/* implicit */int) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_0))))) < (((/* implicit */int) var_10))))) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)11730)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))), (arr_7 [i_0] [i_0 - 1] [i_0])));
                    var_20 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)2547)) ? (((/* implicit */int) (unsigned short)5989)) : (((/* implicit */int) (signed char)-124)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)5))))))) ? (((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-42)))) / (((/* implicit */int) (signed char)-124))));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_22 = min(((-(((/* implicit */int) (unsigned short)32684)))), (((/* implicit */int) var_9)));
                            var_23 &= ((/* implicit */int) arr_17 [i_5]);
                            var_24 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3]))))) + (var_1))), (((((/* implicit */_Bool) 2459367471U)) ? (1755796375076553132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6 - 2])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4 + 2])) << (((((/* implicit */int) (short)-1825)) + (1828))))))));
                            var_27 -= max((((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 2] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2]))) : (0ULL))), (((/* implicit */unsigned long long int) var_11)));
                            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -134217728)) ? (1163854651) : (((/* implicit */int) var_10)))) >> (((((/* implicit */int) (short)-1826)) + (1851)))));
                            var_29 = min((min((((/* implicit */unsigned long long int) max(((short)-1845), (((/* implicit */short) arr_10 [i_3]))))), (min((var_1), (140720308486144ULL))))), (((/* implicit */unsigned long long int) (_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
