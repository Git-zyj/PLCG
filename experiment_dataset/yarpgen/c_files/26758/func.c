/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26758
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
    var_20 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 18; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) var_9);
                        arr_11 [i_0] [i_1 - 4] [9LL] [i_3] = ((/* implicit */short) max((((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned char)124)))), (((/* implicit */int) ((unsigned short) var_16)))));
                        arr_12 [i_0] [i_1] [i_0] [(unsigned char)11] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))) & (950168096765118952LL))) < (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        arr_13 [i_0] = ((/* implicit */signed char) ((int) min((-950168096765118954LL), (max((-950168096765118952LL), (((/* implicit */long long int) (_Bool)1)))))));
                    }
                } 
            } 
            var_22 |= ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))));
        }
        for (long long int i_4 = 4; i_4 < 18; i_4 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((var_23), ((short)9205)));
            var_24 = ((/* implicit */unsigned char) arr_0 [i_4 - 4] [(_Bool)1]);
            arr_17 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_13) & (arr_10 [i_4 - 1] [i_4 - 3] [i_4 - 4] [i_4 + 2] [i_4 - 3]))));
            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) var_1))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 4; i_5 < 19; i_5 += 4) 
        {
            arr_20 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((((/* implicit */_Bool) var_17)) ? (-950168096765118954LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            var_26 = ((/* implicit */short) -950168096765118953LL);
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_23 [i_0] [i_5] [i_5 - 2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-123)) ? (7139602633987907111ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_24 [i_0] [i_0] [(short)14] [i_6] = ((unsigned char) var_19);
            }
        }
        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), (((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0] [(signed char)12]))))) & (var_10))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_17)))))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((unsigned short) (-(-950168096765118962LL)))))));
            var_29 += ((/* implicit */short) ((unsigned long long int) ((((unsigned long long int) var_5)) < (((arr_3 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (signed char i_8 = 4; i_8 < 17; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) var_5)))), ((~(((/* implicit */int) ((unsigned short) var_18)))))));
            arr_32 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) < (6ULL))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(_Bool)1])) / (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8 + 3] [i_0]))) : (((((/* implicit */_Bool) 11307141439721644505ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))) : (var_4)))))));
            var_31 += max((arr_0 [i_0] [(unsigned char)12]), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) * (1493849484598205533ULL))))));
        }
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            arr_36 [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) | (arr_31 [i_0])))) ? ((~(arr_31 [i_0]))) : (((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_9]))) : (var_10)))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_35 [i_0] [(unsigned short)12] [i_0])))) < (9823035730307723586ULL)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))))), ((unsigned char)220)))))))));
            arr_37 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_7)) <= (((/* implicit */int) min((var_6), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0]))))))));
        }
        arr_38 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)19)), ((short)-4072))))) : (var_16)))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) ^ (((((arr_30 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) % (var_8))) : (7139602633987907086ULL))))))));
    }
}
