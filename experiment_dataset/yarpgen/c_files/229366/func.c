/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229366
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) ^ (3006661307494526318LL))))) ? (((arr_1 [i_1] [i_0]) / (min((arr_1 [(unsigned short)1] [i_0]), (-3423243478444991048LL))))) : (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [1]) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -1462279325)) ? (var_2) : (((/* implicit */long long int) -574165113)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27995)))))));
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2191606928U)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (3006661307494526318LL) : (((/* implicit */long long int) -574165136))))));
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-3006661307494526322LL)))) ? ((-(-3006661307494526319LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)36)) + (((/* implicit */int) arr_2 [i_0] [i_1] [7ULL])))))))) ? (((((/* implicit */_Bool) 3081702361U)) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned int) var_4)), (arr_0 [i_1]))))) : (((((/* implicit */_Bool) -35365997)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (3789877912U))));
            arr_6 [(unsigned char)2] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned int) (+(-382024826))))))) > (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])) : (arr_1 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
        }
        var_12 += ((/* implicit */int) ((((/* implicit */_Bool) 35366010)) && (((/* implicit */_Bool) 729510994U))));
        var_13 = ((/* implicit */long long int) arr_3 [(unsigned short)0] [i_0] [i_0]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)1))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned short)32222)) : (((/* implicit */int) (unsigned char)16))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (1968240029U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))) < (((/* implicit */unsigned int) max((-1462279338), (((/* implicit */int) (unsigned char)241)))))))))));
        var_14 = min((((/* implicit */unsigned int) min(((unsigned char)254), ((unsigned char)68)))), (var_9));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 382024834)) ? (((/* implicit */int) (signed char)-40)) : (1462279312)))) ? (((((-382024818) + (2147483647))) << (((8216378532791386291LL) - (8216378532791386291LL))))) : (-382024818)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((16777216U) <= (((/* implicit */unsigned int) (-2147483647 - 1))))))) : (min((2529505451U), (((/* implicit */unsigned int) 1462279342))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_3] [i_4]))) / (((((((/* implicit */_Bool) 3081702361U)) || (((/* implicit */_Bool) (unsigned char)3)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_2])), (1462279326)))))));
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) arr_9 [i_2] [i_3]))) || (((/* implicit */_Bool) arr_12 [i_2])))) ? (((((/* implicit */int) arr_9 [i_2] [i_3])) * (((/* implicit */int) arr_9 [(unsigned short)0] [i_3])))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) : (((/* implicit */int) min(((unsigned short)42094), (((/* implicit */unsigned short) (_Bool)0)))))))));
                    var_18 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) != (((/* implicit */int) (unsigned char)23))))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)20)) && (((/* implicit */_Bool) -574165136))))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_19 = (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5])) << (((var_2) + (5425400689333097864LL)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3490815763U)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)110))))) : (max((min((var_5), (arr_0 [i_5]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
        arr_20 [i_5] = ((((/* implicit */_Bool) 804151533U)) ? (-574165136) : (21548966));
    }
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 += ((/* implicit */unsigned int) (unsigned char)89);
}
