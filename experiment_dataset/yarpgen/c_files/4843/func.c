/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4843
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [6] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) >= (((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
        var_17 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) 6552015160872808710LL)) && (((/* implicit */_Bool) -1)))))));
        var_18 = ((/* implicit */unsigned long long int) ((min((var_6), (((/* implicit */long long int) (_Bool)0)))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)63))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) < (-1))) ? (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) % (4769949906763982854ULL)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [i_2] [i_2 - 2] [5ULL] [i_1] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)4604))));
                            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1784)) ? (-1467198696) : (((/* implicit */int) var_13))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_17 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)27))))) ? (((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (unsigned short)65527)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                            arr_18 [i_0] [(short)0] [i_1] [i_1] [i_5] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_14)))) % (((((/* implicit */_Bool) 13784763127364635226ULL)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (short)0))))));
                            var_22 = max((((((/* implicit */long long int) ((var_16) ? (-1697000565) : (((/* implicit */int) var_5))))) == ((+(-1549722119935394795LL))))), ((!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15)))))));
                            arr_19 [i_1] [i_1] = ((/* implicit */signed char) (+(1697000565)));
                        }
                        arr_20 [i_0 + 1] [i_1] [13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)9863), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)21)), (15839507506000327069ULL))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (unsigned short)56056)))) - (56056)))));
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) min(((unsigned char)226), (((/* implicit */unsigned char) (signed char)83))))) : (((/* implicit */int) max(((signed char)-75), (((/* implicit */signed char) var_16))))));
                        var_24 = ((/* implicit */unsigned short) var_15);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((short) var_0))) > (((/* implicit */int) var_14)))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((long long int) ((((/* implicit */int) (short)-8853)) ^ (((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)60261)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_27 *= ((/* implicit */unsigned char) (+(var_7)));
            var_28 = ((/* implicit */unsigned int) ((_Bool) 15839507506000327075ULL));
            arr_25 [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-17248)) ? (((/* implicit */int) ((_Bool) -749909609))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5)))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned long long int) (+(2211926639U)));
        arr_29 [i_8] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)49614)) << (((/* implicit */int) ((-1) < (((/* implicit */int) (short)-26571)))))));
        var_29 = ((/* implicit */_Bool) ((((long long int) -749909633)) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (2211926628U))))));
    }
    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)175)), (2211926639U)))))))));
    var_31 *= ((/* implicit */unsigned short) min(((+((+(((/* implicit */int) var_16)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((399447427743097143ULL), (((/* implicit */unsigned long long int) var_9))))))))));
    var_32 = ((/* implicit */long long int) ((signed char) var_15));
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) 9223372036854775807LL))), (((((/* implicit */int) var_13)) + (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)7757)) - (((/* implicit */int) var_8)))) <= (((/* implicit */int) var_9))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) >= (((/* implicit */int) ((2607236567709224547ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5340)))))))))));
}
