/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213147
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] = ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)0))))));
        var_14 = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((unsigned int) (signed char)19));
            var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-7539772799884404407LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (short)-25084))) & (((((/* implicit */unsigned long long int) var_1)) & (var_2)))));
                var_18 = ((/* implicit */_Bool) (short)7570);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51095))))) : (var_4)));
                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54122))));
            }
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            arr_14 [12] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) >> (((((/* implicit */int) (unsigned char)255)) - (237)))));
            arr_15 [i_4] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) var_0));
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) 536870912U));
        }
        arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3936)) ? (((/* implicit */long long int) -146805016)) : (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 2])));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) 183407793U)) : (var_11)))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */int) var_5);
                    var_22 = ((/* implicit */unsigned int) (unsigned char)249);
                    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-5701))));
                }
                for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (unsigned char)157))));
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)25))));
                    arr_30 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) < (536870904)));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned int) ((unsigned int) 8547172087161649740LL))))));
                }
            }
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
            {
                var_27 ^= ((/* implicit */signed char) (~(arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    arr_38 [i_1] [1] [i_5] [i_9] [i_1] [i_10] = ((/* implicit */int) (-(((unsigned long long int) var_12))));
                    /* LoopSeq 4 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_1] [i_9] [i_9] [(short)0] [i_1] [i_1] = ((/* implicit */_Bool) var_3);
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) || (((/* implicit */_Bool) var_13))));
                    }
                    for (int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) 0ULL);
                        var_30 = ((/* implicit */short) ((unsigned long long int) 36836586868471963LL));
                    }
                    for (int i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 963363789U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)142)) : (536870916))) : (((/* implicit */int) arr_12 [i_1 + 1]))));
                        var_31 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 2494229068708550015LL))));
                        var_32 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (unsigned short)57344)))));
                    }
                    for (unsigned int i_14 = 3; i_14 < 12; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) (short)25103)))))));
                        arr_54 [5ULL] [i_5] [i_9] [(unsigned short)6] [i_1] [4] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)0))));
                        var_34 = (!(((/* implicit */_Bool) 280774608)));
                    }
                    var_35 += ((/* implicit */_Bool) var_2);
                }
            }
            for (short i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / ((-(-7313855830129722764LL))))))));
                var_37 = ((/* implicit */short) ((unsigned int) var_6));
            }
            var_38 = ((/* implicit */_Bool) min((var_38), ((!(((/* implicit */_Bool) var_3))))));
            var_39 = ((/* implicit */unsigned int) ((var_1) >> (((((/* implicit */int) var_5)) - (28075)))));
        }
    }
    for (unsigned char i_16 = 2; i_16 < 11; i_16 += 1) /* same iter space */
    {
        arr_59 [i_16] [i_16] = ((/* implicit */unsigned short) ((-2494229068708550015LL) == (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_55 [i_16] [(unsigned char)9] [i_16 - 2] [(short)7])) < (var_6)))), ((+(((/* implicit */int) var_3)))))))));
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            for (int i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(1917038979U)))) < (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))), ((-(((((/* implicit */_Bool) arr_45 [i_19] [2] [i_17] [i_17] [i_16])) ? (var_11) : (-624346751676603043LL))))))))));
                        var_41 = ((/* implicit */int) ((unsigned char) ((short) (+(((/* implicit */int) (unsigned short)835))))));
                    }
                } 
            } 
        } 
        arr_69 [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_13), (((/* implicit */short) ((var_6) == (((/* implicit */int) var_13))))))))));
    }
    var_42 = ((/* implicit */_Bool) max((var_42), (var_12)));
}
