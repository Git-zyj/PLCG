/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44185
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 6; i_2 += 2) 
            {
                {
                    var_11 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [(unsigned char)1] [i_1] [i_1] [(_Bool)1])) < (((/* implicit */int) arr_5 [(unsigned char)0] [i_0] [i_1] [(unsigned char)0]))))), (arr_4 [i_2 + 2] [i_2] [(_Bool)1])))));
                    var_12 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 2])) || (var_4)))))), (((long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)11)))))));
                }
            } 
        } 
        arr_6 [i_0] = (!(((/* implicit */_Bool) (signed char)13)));
        var_13 = ((/* implicit */long long int) (-((-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (signed char)-5)))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(arr_8 [i_3])))))) ? ((~(((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (21500))))))) : ((~(((/* implicit */int) ((arr_7 [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-16955))))))))));
        var_14 = ((/* implicit */short) max((((-7065235308666452203LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) ((arr_8 [i_3]) != (arr_8 [i_3]))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-126992606) : (((/* implicit */int) var_8))))) ? ((~(15681426434077330258ULL))) : (((/* implicit */unsigned long long int) -2069732540))))) && (((/* implicit */_Bool) arr_7 [i_3]))));
    }
    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
    {
        var_16 = max((((((/* implicit */_Bool) (signed char)-1)) ? (3177353533U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))), ((((~(var_3))) << (((((/* implicit */int) arr_10 [i_4 - 2])) + (19284))))));
        arr_13 [i_4] [i_4] = ((/* implicit */short) max(((-(((((/* implicit */int) (signed char)12)) + (((/* implicit */int) arr_10 [i_4])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned char)29)))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) var_4))))))));
    }
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
        {
            arr_20 [i_5] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_14 [i_6 + 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (1117613763U)))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((_Bool) arr_11 [i_5] [i_5]))))))));
            arr_21 [i_6 + 1] [i_6] = ((/* implicit */_Bool) (unsigned char)182);
            var_17 = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_1 [i_6 + 1] [i_6]))));
        }
        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) /* same iter space */
        {
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */int) (signed char)-12);
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (signed char i_9 = 4; i_9 < 7; i_9 += 2) 
                {
                    {
                        arr_33 [i_5] [i_7] [i_7] [i_5] [i_9] &= ((/* implicit */unsigned int) (~((-(((((/* implicit */int) (unsigned char)227)) - (((/* implicit */int) var_4))))))));
                        arr_34 [i_5] [i_7 - 1] [i_8] [i_9 + 1] [i_9] [i_7] = ((/* implicit */short) arr_14 [i_8]);
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)83))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-13)))) << (((((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28625))))) - (28603ULL)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (short)-28609)) != (2113343534)))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_5 [i_5] [(unsigned char)0] [i_5] [i_5])))), (((((/* implicit */int) var_1)) == (((/* implicit */int) arr_2 [(unsigned char)7])))))))));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((((/* implicit */int) arr_37 [i_10])) + (((/* implicit */int) arr_37 [i_10])))), ((-(((/* implicit */int) (_Bool)1)))))))));
        arr_38 [i_10] = ((((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */short) (signed char)11)), ((short)-4096)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) != (max((((/* implicit */unsigned int) (unsigned char)47)), (arr_11 [i_10] [i_10]))));
        var_21 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)32767)))) / ((-(((/* implicit */int) arr_12 [i_10] [i_10]))))));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11928123611943415815ULL)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (short)-4074))))) : (((3177353505U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_10] [i_10]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 9; i_11 += 3) 
        {
            for (long long int i_12 = 2; i_12 < 11; i_12 += 3) 
            {
                {
                    arr_44 [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)223)) * (((/* implicit */int) (unsigned char)28))))) | ((+(arr_41 [i_11 + 2] [i_12 - 2])))));
                    arr_45 [i_10] [i_11] [(unsigned char)9] [11ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-5))))) ? (((((/* implicit */int) (unsigned char)86)) ^ (((/* implicit */int) (signed char)-17)))) : (((/* implicit */int) min((((/* implicit */short) arr_42 [i_11 - 2] [i_12] [i_12 + 1] [i_12])), ((short)-10264))))));
                    arr_46 [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_7 [i_11 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_12 + 1])) / (((((/* implicit */_Bool) arr_11 [i_11] [i_11])) ? (-1) : (-3))))))));
                    arr_47 [(unsigned short)0] [i_11] [i_11] [i_12] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) ((((/* implicit */int) (signed char)2)) / (2147483647)))), ((-(4623457153917911535LL)))))));
                }
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        arr_50 [i_13] [i_13] = ((((9854837173643032255ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))) != (((/* implicit */unsigned long long int) (-(arr_11 [0LL] [i_13])))));
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((short)18704), (arr_10 [i_13]))))));
        arr_51 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) : (357420793U)))));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((-(var_6))) : (((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1116273178))) : (((/* implicit */int) var_1))))));
    var_24 = var_6;
}
