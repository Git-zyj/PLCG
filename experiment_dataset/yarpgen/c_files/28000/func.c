/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28000
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1222070317771236751ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))), (4209281792U)));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [(short)8])), (var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32736))) : (((arr_0 [9LL] [i_0 + 2]) / (arr_0 [i_0] [i_0 + 1])))));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [(unsigned short)12])) : (((/* implicit */int) arr_5 [i_1]))))));
        arr_8 [8U] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 608865236U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)29004))))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (0U))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32736))) == (var_5))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_5 [(unsigned short)12]);
    }
    for (short i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (529379916142952573ULL))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (13858988818104470962ULL)))))) ? (((/* implicit */int) ((_Bool) (unsigned short)28997))) : (min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_10 [i_4] [i_3]))))));
                        var_15 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 3224033521338418832ULL)) && (((/* implicit */_Bool) arr_5 [i_5 - 2])))));
                        arr_20 [i_5] [i_4] [i_3] [i_5] = ((/* implicit */int) min((((unsigned short) min((arr_14 [i_2] [i_5]), (((/* implicit */int) var_2))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4] [i_5 - 2])))))));
                        var_16 = arr_14 [16] [i_4];
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_26 [i_2 + 1] [i_6] [i_7] = ((/* implicit */unsigned char) (unsigned short)55151);
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_12)))));
                    arr_27 [10ULL] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)101), (((/* implicit */signed char) (_Bool)1))))) && ((!(((/* implicit */_Bool) arr_15 [i_2] [i_2 - 1]))))))) <= (((/* implicit */int) arr_15 [i_2] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((arr_17 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_8]) >> (((var_0) + (812822779)))))))) ? (((((/* implicit */_Bool) max((arr_11 [i_2]), (((/* implicit */unsigned long long int) var_10))))) ? (var_8) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_9] [i_6]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_25 [i_9] [i_7] [i_6])), (3224033521338418832ULL)))) ? (((/* implicit */int) arr_15 [i_9] [i_6])) : (((/* implicit */int) (unsigned char)160)))))));
                                var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-32747)), (min((((/* implicit */unsigned long long int) arr_24 [i_6] [i_2 - 1])), (((unsigned long long int) arr_29 [i_9] [i_9] [i_8] [i_7] [i_6] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) (short)-9262);
}
