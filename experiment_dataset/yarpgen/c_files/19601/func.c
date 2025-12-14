/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19601
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
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_3 [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0])), (arr_1 [i_0] [6U])))) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) 18437736874454810624ULL)) ? (18437736874454810608ULL) : (18437736874454810624ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((9007199254740992ULL), (((/* implicit */unsigned long long int) (short)-512))))))) : (min((((/* implicit */unsigned long long int) min(((unsigned short)62068), (((/* implicit */unsigned short) (short)-1445))))), ((~(9007199254740985ULL)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((_Bool) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))));
        arr_5 [(unsigned char)16] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(signed char)10] [i_0])))))));
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!((_Bool)1)))), (((short) (short)512))))) ? ((-((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) / (arr_0 [11LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)11)) - (((/* implicit */int) (unsigned char)165)))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)9]))) : (arr_9 [(signed char)1]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))))), (((signed char) (short)511))));
        arr_12 [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned char) arr_7 [(signed char)2]));
        arr_13 [(short)10] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_16 [i_2] = ((/* implicit */signed char) ((unsigned short) (_Bool)0));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_27 [i_3] [i_5] = ((/* implicit */short) ((((_Bool) arr_24 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-485))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (arr_17 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_3])))))), (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [(signed char)3])))))));
                        arr_28 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((unsigned int) (+(arr_19 [i_3] [i_4 - 1]))));
                        arr_29 [i_2] [i_2] [8ULL] [i_5] = ((/* implicit */_Bool) (unsigned char)10);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_32 [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_31 [(_Bool)1]), (arr_31 [12U])))) ? (min((((((/* implicit */_Bool) arr_31 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (arr_31 [(_Bool)1]))), (((/* implicit */long long int) arr_30 [i_6])))) : (((arr_31 [(short)18]) % (arr_31 [(signed char)14])))));
        arr_33 [(signed char)12] = ((/* implicit */signed char) arr_31 [(unsigned char)4]);
    }
    var_12 = ((/* implicit */unsigned char) var_3);
}
