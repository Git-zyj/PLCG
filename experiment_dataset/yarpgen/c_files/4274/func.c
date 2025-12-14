/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4274
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((((unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_9))))), (((unsigned long long int) max((var_10), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        var_15 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (unsigned short)10633)))));
                        var_16 = ((/* implicit */long long int) ((_Bool) var_10));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 2] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_5))))) : (arr_3 [i_0])))) ? (var_3) : ((+(((((/* implicit */int) var_6)) / (((/* implicit */int) var_2))))))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (unsigned short)10643)), (((0U) << (((/* implicit */int) var_5))))))));
                        var_18 = ((/* implicit */_Bool) var_4);
                        var_19 = ((/* implicit */int) (unsigned short)54893);
                        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))), ((~(arr_2 [i_0] [i_0])))));
                    }
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_13 [19LL] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [18U] [i_2])) ? (((/* implicit */int) (unsigned short)54885)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_13 [i_0] [i_0]))))));
                    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_0] [i_0] [2ULL] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_6))))) ? ((-((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) max(((unsigned short)10650), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (arr_2 [(unsigned short)12] [i_5 - 3]))))))))));
            var_23 = ((/* implicit */int) var_10);
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((max((arr_7 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20]), (((/* implicit */unsigned int) (unsigned short)10647)))) >> (((/* implicit */int) arr_17 [i_0] [i_5 + 3])))), (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)31896))))))))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 23; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (signed char i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_18 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))) + (((/* implicit */int) var_1))));
                        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((+(var_3))) : (arr_11 [i_8 - 2] [i_7] [i_7] [i_6 + 1] [i_0] [i_0])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        var_27 = ((var_11) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)10643))))));
                        arr_32 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)54880))));
                    }
                } 
            } 
        }
        arr_33 [(_Bool)1] [i_0] &= ((12665304017319568063ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        var_28 += ((/* implicit */unsigned char) ((unsigned int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
    {
        var_29 = ((((/* implicit */_Bool) ((int) arr_34 [i_11]))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_11]))))))) : (((/* implicit */int) ((signed char) 18014563004961823538ULL))));
        arr_37 [i_11] [18U] = ((/* implicit */short) min((((((/* implicit */_Bool) (-(arr_21 [i_11])))) ? (((arr_34 [i_11]) ? (((/* implicit */int) (unsigned short)10613)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) var_11))))), (((/* implicit */int) ((_Bool) arr_16 [i_11] [(short)22])))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_12))))) : (((unsigned int) 12665304017319568063ULL))))) ? (((((/* implicit */_Bool) ((int) var_7))) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */int) var_12)) >> (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_2)))))));
        var_31 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) == (((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) ((signed char) arr_26 [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (arr_26 [i_11] [i_11] [i_11] [i_11]))))));
    }
    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_13))));
    var_33 = ((/* implicit */long long int) var_10);
    var_34 = ((/* implicit */int) var_0);
}
