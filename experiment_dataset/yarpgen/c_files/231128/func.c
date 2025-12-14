/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231128
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1] [i_1] [i_2]) : (((/* implicit */int) (unsigned char)1)))), ((~((+(((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [4ULL]))))))));
                    arr_8 [i_0] |= (((!(((/* implicit */_Bool) (unsigned short)41246)))) ? (min((max((((/* implicit */int) (unsigned char)254)), (var_6))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)5834)) : (((/* implicit */int) (unsigned char)254)))))) : (((/* implicit */int) (!(((var_11) && (((/* implicit */_Bool) 134217727LL))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6270350407054045215LL))))) : ((-(((/* implicit */int) (short)24536))))))) ? ((((_Bool)1) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), ((short)22760)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-22759)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned char)10] [i_1])) ? (((/* implicit */int) ((unsigned char) (short)22760))) : (((/* implicit */int) max(((unsigned char)147), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) 1073741823)) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2226193370U)))))) : ((~(0U)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (-(var_5)));
    var_19 = ((((/* implicit */int) (short)22750)) + (((/* implicit */int) (unsigned short)65535)));
    var_20 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (var_2))))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_13);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                arr_27 [i_7] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
                                arr_28 [i_4] [i_4] [i_5] [i_7] [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_4)) < (min((((/* implicit */unsigned long long int) (signed char)127)), (arr_19 [i_3] [i_3] [i_3] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_6] [i_7] [i_4])) - (((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_6])) == (((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                    arr_29 [1] [i_4] [1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_5] [i_5] [i_3] [(signed char)16])) : ((+(((/* implicit */int) arr_22 [i_3] [i_4] [i_5] [i_3] [i_3] [i_4]))))));
                }
            } 
        } 
    } 
}
