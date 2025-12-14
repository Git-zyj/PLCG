/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223490
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 -= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (max((6276373410710682887LL), (((/* implicit */long long int) (unsigned char)54)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), (arr_3 [(unsigned short)17]))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) arr_3 [i_1])) - (52539))))) << (((((/* implicit */_Bool) 6276373410710682903LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)54))))))));
                var_21 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [(unsigned char)18])) : (((/* implicit */int) arr_2 [i_1])))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) max((((arr_0 [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_2 [18LL])) : (((/* implicit */int) (unsigned char)200)))), (((/* implicit */int) arr_2 [i_0 - 1]))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_16);
    var_24 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)205))));
        arr_9 [i_2] = ((/* implicit */_Bool) (signed char)-68);
    }
    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) min((var_26), (((((/* implicit */int) min((arr_3 [i_3 + 1]), (arr_3 [i_3 - 1])))) != ((~(((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)164))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        arr_19 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((min((((((((/* implicit */int) arr_12 [i_3])) + (2147483647))) << (((var_0) - (1330553319))))), ((-(((/* implicit */int) arr_12 [i_3])))))) <= (((/* implicit */int) ((-4500207551128356607LL) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [3U]))))))))) : (((/* implicit */unsigned char) ((min((((((((((/* implicit */int) arr_12 [i_3])) - (2147483647))) + (2147483647))) << (((var_0) - (1330553319))))), ((-(((/* implicit */int) arr_12 [i_3])))))) <= (((/* implicit */int) ((-4500207551128356607LL) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [3U])))))))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)7939)), (((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_6])) ? (146603166) : (((/* implicit */int) arr_3 [i_6]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 2])) | (((/* implicit */int) arr_16 [i_3 + 1] [i_4 - 3] [i_4] [0LL]))))) : (((((/* implicit */_Bool) (short)18577)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) var_12))))) : (arr_14 [i_3 + 3] [i_4 - 2]))))))));
                        arr_20 [i_3] [i_3] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) 0);
                    }
                } 
            } 
            arr_21 [i_3] [i_3] [i_4] = ((/* implicit */int) arr_11 [i_3] [(unsigned short)0]);
        }
        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 979189627U)) | (((arr_10 [(signed char)13]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1321634395))))) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned short)27))))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */long long int) ((/* implicit */int) var_15))) != (min((((/* implicit */long long int) arr_1 [i_3] [i_7])), (arr_22 [i_3 + 1])))))));
        }
        var_31 = ((/* implicit */_Bool) (unsigned short)14615);
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-(((((/* implicit */int) var_18)) >> (((/* implicit */int) var_13)))))))));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_4))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_9] [i_10])))) <= (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)203)) | (((/* implicit */int) (unsigned char)57))))) ^ (max((arr_25 [(signed char)6] [i_8]), (((/* implicit */unsigned long long int) arr_0 [(short)17] [i_9])))))))))));
                        arr_30 [i_3] [i_8] [(short)7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((arr_10 [i_8]) * (((/* implicit */unsigned long long int) var_17))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)6))))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_11 + 2] [(unsigned short)6] [i_11])) ? (((/* implicit */int) (unsigned short)24931)) : (((/* implicit */int) arr_12 [(signed char)6]))))) + (((((/* implicit */_Bool) (short)375)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_15 [(short)11]))))))));
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)176)))), (((-146603185) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned char)4] [i_11]))))))))))));
        var_37 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_38 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
}
