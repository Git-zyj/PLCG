/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248981
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) / (((/* implicit */int) ((unsigned short) ((int) var_6))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((((/* implicit */int) var_1)) + (2147483647))) << (((/* implicit */int) (signed char)0))))))) && (((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) (unsigned char)111)), (var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (((-2147483647 - 1)) | ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))))) << (((/* implicit */int) (((-(((/* implicit */int) (short)-16866)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))))) != ((-(var_9)))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) (((-(var_10))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)74)) % (((/* implicit */int) arr_6 [i_2] [i_2])))))));
        var_18 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) max(((unsigned char)121), (arr_6 [i_2] [(_Bool)1]))))), ((-(((((/* implicit */int) arr_7 [i_2] [i_2])) | (((/* implicit */int) arr_7 [8] [8]))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_7 [i_2] [(_Bool)1])) | (((/* implicit */int) arr_7 [i_2] [i_2])))) <= (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)118))))))) & (((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [(signed char)5])))))) ? ((+(((/* implicit */int) arr_7 [(unsigned char)13] [i_2])))) : ((-(((/* implicit */int) (short)1587))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) -1922741852)), (var_13))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) && (((/* implicit */_Bool) arr_10 [i_4] [i_4]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)3513)) ? (((/* implicit */int) (short)1569)) : (((/* implicit */int) (signed char)28)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_9)))))))));
                    var_22 = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 4; i_5 < 19; i_5 += 2) 
    {
        arr_20 [(unsigned short)4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111)))))));
        arr_21 [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-16866)) : (((/* implicit */int) (unsigned char)118))))) + (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3034)))))));
        arr_22 [i_5 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_16 [i_5]) == (arr_16 [16])))) < (((/* implicit */int) arr_7 [i_5 - 3] [i_5 - 2]))));
        arr_23 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)138)) < (((/* implicit */int) arr_6 [i_5 - 2] [i_5]))));
    }
}
