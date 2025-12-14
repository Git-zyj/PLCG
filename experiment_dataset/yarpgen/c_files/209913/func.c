/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209913
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
    var_10 = ((/* implicit */int) min((((((/* implicit */_Bool) max((-492495554), (((/* implicit */int) (short)-2760))))) ? (669565553U) : (min((669565580U), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) var_8))));
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [(unsigned char)1] [i_2] [i_3] [i_3 - 2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) - (669565556U)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)84))))))));
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 669565553U))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) (signed char)112)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (6384526782730871793LL)))) ? (((((/* implicit */_Bool) (signed char)25)) ? (var_9) : (((/* implicit */int) (short)-10940)))) : (var_9))))));
                        arr_11 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] = ((/* implicit */int) var_3);
                        arr_12 [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)16383)), ((-((((_Bool)0) ? (arr_8 [i_0 - 2] [(_Bool)1] [i_0 - 2] [i_0] [(_Bool)1] [i_0]) : (var_7)))))));
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((max((635055467U), (((/* implicit */unsigned int) (_Bool)1)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)19122))) != (734278054072555209LL))))))))));
                    }
                } 
            } 
        } 
        arr_13 [0LL] = ((/* implicit */long long int) (~(4294967295U)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(arr_15 [(unsigned short)6])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))))) : (2922021494U)))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (~(var_7))))));
    }
    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)1))))) ? ((~(var_5))) : ((+(var_5))))), (((/* implicit */long long int) var_6))));
}
