/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200406
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
    var_19 = ((/* implicit */signed char) (_Bool)1);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned short) ((unsigned char) 13550494711531735082ULL))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) < (((/* implicit */int) (_Bool)0))))), ((-(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0 - 2]))))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) arr_1 [0LL] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((int) (-((-(((/* implicit */int) arr_3 [(_Bool)1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_7 [i_1] [i_2] [(unsigned short)3] [(unsigned char)4]) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_5 [i_3] [i_4]))))))), (min(((signed char)94), (var_2))))))));
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))) : (arr_5 [i_1] [(unsigned char)3])))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)17679)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (4779838435577929632LL))), (((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) var_15))))))))));
                        var_26 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) <= (min((((/* implicit */long long int) ((int) var_15))), (((((/* implicit */_Bool) 2100747849)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_3]), (arr_4 [i_1])))) ? (((long long int) -9223372036854775792LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (signed char)114))))))));
                        var_28 = ((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) min((max((4170458933541726891ULL), (((/* implicit */unsigned long long int) (signed char)127)))), (((/* implicit */unsigned long long int) 8191U))))))))));
        var_30 = ((/* implicit */unsigned short) (+((-((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5 - 1]))) : (var_10)))))));
        var_31 = ((long long int) -861838219);
    }
    var_32 *= ((/* implicit */unsigned char) var_1);
}
