/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26001
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
    var_11 = ((/* implicit */unsigned int) (-((((-(((/* implicit */int) var_7)))) + (((/* implicit */int) var_4))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) -670575478)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (_Bool)1))));
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    var_14 = ((/* implicit */unsigned short) max((((int) ((((/* implicit */unsigned long long int) var_8)) ^ (13021862839299091590ULL)))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31673))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 65535U))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))))))));
            arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_0])))), (var_5)));
            var_17 *= ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) | (((/* implicit */int) arr_0 [i_0])))))));
            arr_5 [(signed char)9] [7U] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (_Bool)1)), (var_5))))))));
            var_18 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)9610))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_19 = (short)1920;
            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((3093071215U), (((/* implicit */unsigned int) (_Bool)1))))), ((+(min((17817514295601840751ULL), (1099511627775ULL)))))));
        }
        var_21 *= ((((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_0] [i_0]))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_0 [i_0])), (var_0)))))) : (var_8));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned char) arr_10 [5] [i_4 + 2])))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_9))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_1))));
            var_26 = ((/* implicit */long long int) arr_1 [i_3] [i_4]);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)22883)) + (var_2)))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_11 [i_3]) : (((/* implicit */int) (unsigned char)15))));
                        arr_25 [i_7] [i_5] [i_6] [i_5] [i_3] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)23)))) - (((((/* implicit */_Bool) (short)-5460)) ? (arr_14 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)219))));
                    }
                } 
            } 
            var_30 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)224)), ((+(((/* implicit */int) (unsigned char)245)))))))));
            var_32 = ((/* implicit */unsigned char) min((arr_20 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */short) (signed char)-1))));
            var_33 = ((/* implicit */unsigned int) arr_11 [i_3]);
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_20 [i_3] [i_3] [i_8] [i_8]))))))) ? ((-(min((var_8), (((/* implicit */unsigned int) (unsigned char)239)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_28 [i_3] [i_3] [i_8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6290222245692792983LL))))))))))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned int) arr_31 [i_9] [i_9])) % (var_5))))));
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) arr_12 [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)9936))));
    }
    for (int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            arr_38 [i_10] = ((/* implicit */_Bool) max(((unsigned char)15), (((/* implicit */unsigned char) (_Bool)1))));
            var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10]))))) : (((/* implicit */unsigned long long int) 2253244246U))))));
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_7 [i_11] [i_11] [i_10]))))))))));
                arr_41 [i_10] [i_10] [(_Bool)1] [i_12] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) (unsigned char)63))), (((((/* implicit */_Bool) arr_15 [i_10] [i_12])) ? (((/* implicit */int) (unsigned short)10350)) : (((/* implicit */int) arr_15 [i_10] [i_10]))))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_10] [i_11] [i_12]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_10] [i_10] [i_10]))))) : (min((arr_1 [i_10] [i_11]), (((/* implicit */unsigned int) (_Bool)1))))));
                var_39 = ((/* implicit */int) max((((signed char) arr_36 [i_10])), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_10])) && (((/* implicit */_Bool) arr_3 [i_10] [i_11] [i_12])))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)7078)) || (((/* implicit */_Bool) (unsigned short)46978)))))));
                            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_11] [2U])) ? (((/* implicit */int) (_Bool)1)) : (-1108714060))), (((/* implicit */int) (unsigned short)46884))))), (min((11003099223820956460ULL), (((/* implicit */unsigned long long int) (short)22005)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) -456863093)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) var_9))))))), ((+(arr_22 [i_16] [i_10] [i_10] [i_10] [i_10])))));
            var_43 |= ((/* implicit */short) var_8);
            var_44 |= ((/* implicit */unsigned long long int) (-((-(((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_49 [i_10] [i_10] [i_16]))))))));
            /* LoopNest 2 */
            for (signed char i_17 = 3; i_17 < 8; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    {
                        var_45 -= ((min((3342699510U), (((/* implicit */unsigned int) (short)22005)))) << (((arr_51 [i_16]) + (550211182))));
                        var_46 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_10] [i_16] [(unsigned short)2] [i_18] [i_16]))))) ? (((/* implicit */int) (unsigned short)39257)) : (((/* implicit */int) var_4))));
                        var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_16] [8LL] [i_16])), ((unsigned short)7569)))) ? ((~(780395400U))) : (((/* implicit */unsigned int) (+(min((var_2), (((/* implicit */int) (short)25389))))))))))));
        }
        arr_58 [8U] |= ((/* implicit */short) arr_56 [4U] [i_10]);
        var_49 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 36028797018963967ULL)) ? (((/* implicit */int) (unsigned char)224)) : (arr_51 [4LL])))) ? (((/* implicit */int) var_7)) : (arr_43 [i_10] [(unsigned short)2] [i_10])))));
        arr_59 [i_10] [i_10] = ((/* implicit */short) (-((+(arr_28 [i_10] [i_10] [i_10])))));
        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) var_9))));
    }
}
