/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201981
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
    var_14 = (+(((/* implicit */int) (short)3)));
    var_15 = ((((int) var_0)) >> (((((((/* implicit */int) ((short) var_9))) + (((((/* implicit */int) (short)9)) | (((/* implicit */int) var_11)))))) + (24707))));
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((var_12) << (((((/* implicit */int) var_13)) - (20543))))) : (((/* implicit */unsigned long long int) var_8)))))));
    var_17 = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))) << (((((/* implicit */int) var_10)) + (27873))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))) : (((((/* implicit */_Bool) var_0)) ? (993949801U) : (((/* implicit */unsigned int) var_5))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) / (arr_11 [i_0] [i_1] [i_1] [i_3] [i_4])));
                            var_20 = ((/* implicit */signed char) ((arr_6 [i_0] [i_1] [i_0] [i_1]) << (((var_8) + (242787999)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_7);
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_12))))));
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((_Bool) var_11)))));
                        var_24 = ((((((((/* implicit */_Bool) var_11)) ? (var_4) : (var_8))) + (2147483647))) << (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30))) <= (var_0)));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (var_5))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (var_8) : (((/* implicit */int) (signed char)-39)))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            var_26 = ((/* implicit */short) arr_12 [i_6] [i_7 - 1] [i_7 - 1]);
            var_27 = ((/* implicit */unsigned char) var_4);
            arr_21 [i_7] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)252)) ? (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)11))))) + (((long long int) arr_7 [i_6])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11366396071464933289ULL)) ? (1039168787) : (((/* implicit */int) (signed char)64))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7])))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 311225277)) ? (((((/* implicit */_Bool) arr_7 [i_7 + 2])) ? (var_12) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)229))))))) : (((arr_8 [i_6] [i_6] [i_6] [10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-3)))))))))));
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_24 [i_8] = ((/* implicit */signed char) ((unsigned short) (~(((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) - (28481))))))));
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)2386))));
            var_29 &= (+(((/* implicit */int) (unsigned short)330)));
        }
        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_30 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
            var_31 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_9] [i_6]))))) % (var_4)));
            var_32 = (((!(((/* implicit */_Bool) arr_10 [i_6] [i_9] [i_6] [i_6] [i_6] [i_6])))) ? ((~(arr_10 [i_6] [i_6] [i_9] [i_6] [i_6] [i_6]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-7562))))));
        }
        var_33 = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) ^ (((/* implicit */int) arr_1 [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) && ((!(((/* implicit */_Bool) (short)-30))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
    {
        arr_31 [i_10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_10]))))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_10] [16U] [16U] [i_10])))))))));
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    {
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11])))))))) ? (var_12) : (((/* implicit */unsigned long long int) var_0)))))));
                        arr_40 [i_10] [i_10] [i_10] [i_11] [i_10] [i_11] = (+(((/* implicit */int) ((unsigned short) (unsigned short)0))));
                    }
                } 
            } 
        } 
    }
    for (short i_14 = 0; i_14 < 11; i_14 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-95)) ? (1734907704) : (((/* implicit */int) (unsigned char)128))));
        var_36 -= ((/* implicit */signed char) (((!(arr_15 [i_14] [i_14] [i_14] [i_14] [i_14]))) ? ((+(arr_28 [i_14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_28 [i_14]) < (arr_28 [i_14])))))));
    }
}
