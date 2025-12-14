/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209706
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */int) (_Bool)1)) << (((arr_1 [i_0]) + (6819955461857526012LL)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned int) ((long long int) (unsigned short)20021));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((9586388930522597233ULL) >= (arr_0 [1U])))) == ((+(((/* implicit */int) arr_3 [i_1]))))));
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_12 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1897913091))))), (max((((/* implicit */long long int) ((unsigned char) var_5))), (min((((/* implicit */long long int) -4248872)), (arr_4 [i_0] [i_0])))))));
            arr_10 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) min((((/* implicit */short) var_7)), (var_9)))))) | ((~(((/* implicit */int) ((_Bool) var_9)))))));
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) ((short) -4248872))))))));
        }
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) arr_15 [i_3]))))), (arr_15 [i_4])));
                    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_3))), (((/* implicit */long long int) min((((/* implicit */int) var_0)), (1731653755))))))) ? ((-(((/* implicit */int) ((_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_3]), (((/* implicit */long long int) arr_12 [0U]))))))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */long long int) 8388607U)) : (6651685171064937350LL))))));
                }
            } 
        } 
        var_17 = (+(((min((((/* implicit */int) var_7)), (1731653755))) >> (((((/* implicit */int) var_10)) - (7761))))));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_7])) && (((/* implicit */_Bool) -827814359)))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_31 [i_10] [i_7] [i_8] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) 827814359)) ? (arr_21 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (unsigned short)65510))))))));
                            arr_32 [i_7] [i_10] [i_7] [i_7] [i_10] = ((/* implicit */unsigned long long int) (-(4248871)));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_21 *= (unsigned short)4344;
            var_22 += ((/* implicit */short) var_8);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_2))));
        }
        arr_35 [i_6] = ((/* implicit */unsigned short) (-(((12909469189084801673ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25213)))))));
        var_24 &= ((/* implicit */unsigned char) max((-6651685171064937337LL), (((/* implicit */long long int) -690019915))));
    }
    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_1)))) != (((var_4) - (((/* implicit */unsigned long long int) 4294967283U)))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551588ULL)) ? (((/* implicit */int) var_8)) : (arr_37 [(unsigned short)15] [i_12])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -9200438700869067992LL)) && (((/* implicit */_Bool) -1)))) || (((/* implicit */_Bool) arr_36 [i_12]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44030)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5)))) || (((var_7) || (((/* implicit */_Bool) var_5))))))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 1; i_13 < 10; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_10)))))))) ? ((-(-6651685171064937376LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_13 - 1] [i_14] [0U] [i_13] [(_Bool)1]))))));
                var_28 = ((/* implicit */long long int) -827814384);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            arr_48 [i_16] [i_15] [i_15] [i_13 - 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * ((~(min((((/* implicit */unsigned long long int) var_8)), (var_6))))));
                            var_29 = ((/* implicit */long long int) ((unsigned short) var_9));
                            var_30 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -9200438700869067986LL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_36 [i_13]))))) : ((~(var_1)))))), (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)32767))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
