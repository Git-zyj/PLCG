/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229416
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
    var_19 |= ((/* implicit */_Bool) (short)-6138);
    var_20 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((5257356397732407871LL), (((/* implicit */long long int) 2139581768U))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (min((1554153812), (-1881635796))) : (((((/* implicit */int) arr_1 [i_0])) / ((~(-1881635803)))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max(((+(-1881635796))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_8))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_23 &= ((unsigned int) ((max((14482703966955522962ULL), (((/* implicit */unsigned long long int) (signed char)-85)))) | (((/* implicit */unsigned long long int) (~(2155385519U))))));
                        var_24 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3]))) > (3524685364U))))) <= (((3524685364U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))))))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) * (((15415448266849880615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                arr_17 [i_0] [i_0] [i_4] = (~(var_14));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2155385519U)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    var_27 = ((/* implicit */short) 242097136);
                    arr_21 [i_6] |= ((/* implicit */short) arr_11 [i_6] [i_6]);
                    var_28 -= ((/* implicit */unsigned int) ((((var_2) * (((/* implicit */unsigned long long int) arr_16 [i_0])))) | (((/* implicit */unsigned long long int) ((var_4) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))))))));
                }
            }
            for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_7 + 2] [i_7 + 3])) ? (((/* implicit */unsigned int) var_10)) : (1594919922U)));
                arr_25 [i_0] [i_0] [i_4] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)240))));
                var_30 |= ((/* implicit */int) (~(arr_4 [i_0] [i_0] [i_7 + 1])));
                /* LoopSeq 1 */
                for (int i_8 = 3; i_8 < 17; i_8 += 4) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23018)) ? (((/* implicit */unsigned long long int) arr_29 [i_8 + 1] [i_8 - 1] [i_8] [i_4])) : (var_13)));
                    arr_30 [i_0] [i_0] [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)60209)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) : (arr_18 [i_4] [i_4] [i_8 + 1] [i_8])));
                }
            }
            for (unsigned char i_9 = 1; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) var_6);
                arr_33 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_4] [i_9]))) * (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
            }
            for (unsigned char i_10 = 1; i_10 < 14; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_6))));
                            var_34 ^= ((/* implicit */unsigned long long int) arr_7 [i_11] [i_11]);
                            var_35 += ((/* implicit */_Bool) ((arr_11 [i_11] [i_11]) - (((/* implicit */long long int) ((((/* implicit */_Bool) 4100331408970750060ULL)) ? (3524685355U) : (((/* implicit */unsigned int) -53868688)))))));
                            var_36 ^= ((/* implicit */short) var_14);
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((arr_14 [i_10 + 3] [i_10 + 3] [i_10 + 4]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1208640223)) ? (1208640223) : (((/* implicit */int) (unsigned char)45))))) : ((-(arr_36 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                arr_41 [i_4] [i_4] [i_10] = ((/* implicit */signed char) var_7);
                var_38 = ((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_4] [i_4]) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (15415448266849880615ULL))))));
                arr_42 [i_0] [i_4] = ((/* implicit */_Bool) (~(7526347314680532194ULL)));
            }
            /* LoopNest 2 */
            for (short i_13 = 3; i_13 < 16; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 2139581790U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0]))) : (arr_6 [i_13 + 2] [i_13 + 1] [i_13] [i_13 + 1]))))));
                        arr_49 [i_13] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != ((~(((/* implicit */int) (signed char)60))))));
                        var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1208640221)) ? (-1208640223) : (((/* implicit */int) arr_14 [i_13 - 3] [i_13 + 2] [i_13 - 2]))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            for (int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                {
                    arr_57 [i_15] [i_15] [i_17] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)52)) : (-1208640223)));
                    var_41 = ((/* implicit */signed char) arr_36 [i_16] [i_17]);
                    var_42 = ((/* implicit */int) max((((3968745658171741941LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)2255))))), (((/* implicit */long long int) (unsigned char)215))));
                    var_43 = ((/* implicit */_Bool) (((~(18064380001770217543ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_15] [i_17])) ? (-1208640223) : (((/* implicit */int) (short)-15684)))))));
                }
            } 
        } 
        var_44 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)15671), (arr_38 [i_15] [i_15])))), (-1208640223)));
    }
    var_45 = ((/* implicit */unsigned char) ((3213063391U) != (2139581779U)));
}
