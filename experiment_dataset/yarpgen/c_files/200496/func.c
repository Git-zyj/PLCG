/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200496
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
    var_18 = ((/* implicit */_Bool) (~(var_12)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */int) ((((17726425408199514365ULL) << (((var_1) - (1989166194))))) << (((((2164984619746321826ULL) >> (((((/* implicit */int) arr_5 [i_1] [(unsigned char)14] [i_0])) - (72))))) - (4032598054ULL)))));
            var_20 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((8776289501905676200LL) % (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [(signed char)2] [i_0]))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) (~(((7) & (((((/* implicit */int) var_13)) >> (((/* implicit */int) arr_9 [i_2] [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((3950061607U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -4854416052067006078LL)))))))))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)0] [(signed char)17] [(signed char)17])) ? (((/* implicit */unsigned long long int) -329368986)) : (17287689009118539216ULL)))) ? (-1355797266) : ((~(-329368979))))) : (((/* implicit */int) var_11)))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_2])) % (arr_6 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((329368985) != (329368985))))) : (((min((arr_1 [(unsigned char)2]), (((/* implicit */unsigned int) (unsigned short)12565)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_14 [i_4] [i_4] [i_3] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) 6);
                    var_25 = ((((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)70)))), ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_4]))))))) - (max((((/* implicit */long long int) (~(67043328U)))), (((var_10) << (((/* implicit */int) var_3)))))));
                    arr_15 [i_4] [i_3] [2ULL] [i_2] [i_0] [9] = (+(((/* implicit */int) ((((/* implicit */int) ((329368986) > (329368988)))) <= (((/* implicit */int) arr_9 [i_4] [5] [i_0]))))));
                    var_26 = ((/* implicit */unsigned int) min((((long long int) max((329368986), (arr_10 [i_0] [i_2] [i_3])))), (((/* implicit */long long int) arr_10 [i_4] [i_3] [i_0]))));
                    arr_16 [19ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1664100250) / (329368958)))) ? (((/* implicit */int) min(((unsigned short)31744), (((/* implicit */unsigned short) arr_7 [i_2]))))) : (((arr_7 [i_0]) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) (signed char)-44))))));
                }
                for (int i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    var_27 = ((/* implicit */long long int) (+((~((-(((/* implicit */int) (unsigned short)31744))))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_0), (((/* implicit */long long int) (signed char)-114)))) % (((/* implicit */long long int) ((/* implicit */int) ((-329368986) != (var_16)))))))) ? (((unsigned int) (signed char)70)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((signed char) (signed char)64)), (((/* implicit */signed char) arr_12 [i_0] [i_5 - 1] [i_0] [i_5]))))))));
                }
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((unsigned int) 268435200)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [7] [7]))))) <= (((/* implicit */unsigned int) min((((/* implicit */int) arr_19 [i_6] [i_6] [2LL] [i_2] [i_0])), (((((/* implicit */int) (short)20539)) << (((var_17) - (7136537197278805097LL)))))))))))));
                    arr_21 [20ULL] [i_3] [i_3] [20ULL] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))))));
                }
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned short)31763)))))) + (2147483647))) << (((((int) (signed char)114)) - (114))))))));
            }
            arr_22 [i_2] [6] [i_0] = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) var_13)))))) * (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1]))) >= (11676624264053022313ULL)))) >> (((((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) arr_8 [4ULL])) : (((/* implicit */int) (signed char)-47)))) - (47372)))))));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1798730936)))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_32 ^= 3696715510U;
                            var_33 ^= ((/* implicit */unsigned long long int) arr_25 [i_0] [i_9]);
                        }
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_18 [i_9]), (((/* implicit */long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)57)) ? (-329368959) : (((/* implicit */int) (unsigned char)173)))) : (((((/* implicit */int) (signed char)-67)) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */_Bool) ((long long int) (~(((((/* implicit */int) (unsigned short)31744)) >> (((((/* implicit */int) (unsigned char)51)) - (39))))))));
        var_36 += ((/* implicit */unsigned short) ((((((/* implicit */int) ((arr_17 [(signed char)6]) != (((/* implicit */int) (_Bool)0))))) >> (((((/* implicit */int) var_11)) - (4393))))) + (max((min((-329368942), (((/* implicit */int) arr_20 [11U] [i_0] [i_0] [i_0] [i_0] [(unsigned short)10])))), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_37 = ((/* implicit */long long int) ((var_9) << (((min((((/* implicit */unsigned long long int) var_1)), (var_5))) - (1989166206ULL)))));
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        var_38 = arr_27 [i_11] [i_11];
        var_39 = -329368987;
    }
}
